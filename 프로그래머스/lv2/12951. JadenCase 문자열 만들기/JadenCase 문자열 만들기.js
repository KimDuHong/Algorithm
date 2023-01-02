function solution(s) {
    var answer = '';
    let array = s.split(" ");
    for (let i = 0; i < array.length; i++)
        {
            if(array[i].length === 0) 
            {
                answer += " ";
                continue;
            }
            let word = array[i];
            word = word.toLowerCase();
            let first_char = word[0].toUpperCase();
            let others = word.slice(1).toLowerCase();
            word = first_char + others;
            if (i == array.length-1)
                {
                    answer += word;
                }
            else answer +=word +" ";
        }
    if( answer.length > s.length)  answer = answer.slice(0,-1);
    return answer;
}