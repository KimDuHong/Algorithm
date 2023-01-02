function solution(ingredient) {
    var answer = 0;
    let flag = false;
    let idx = 0;
    while(1){

    for(let i = idx; i < ingredient.length-3; i++)
    {
        if(ingredient[i] === 1 && ingredient[i+1] ===2 &&
          ingredient[i+2] === 3 && ingredient[i+3] === 1)
        {
            flag = true;
            idx = i;
            answer++;
            break;
        }
        
    }
    if ( flag == false) break;
    else 
    {
        flag = false;
        ingredient.splice(idx,4);
        if (idx < 4) idx = 0;
        else idx -=4;
    }
}
    return answer;
}