function solution(answers) {
    var tmp = [0,0,0];
    let supo1 = [1,2,3,4,5];
    let supo2 = [2,1,2,3,2,4,2,5];
    let supo3 = [3,3,1,1,2,2,4,4,5,5];
    for (let i = 0; i < answers.length; i++)
        {
            if(answers[i] == supo1[i%supo1.length])
                {
                    tmp[0] +=1;
                }
             if(answers[i] == supo2[i%supo2.length])
                {
                    tmp[1] +=1;
                }
             if(answers[i] == supo3[i%supo3.length])
                {
                    tmp[2] +=1;
                }
        }
    let max_value = Math.max(...tmp);
    let answer = [];
    for (let i = 0; i < tmp.length; i++)
        {
            if (tmp[i] == max_value)
                {
                    answer.push(i+1);
                }
        }
    return answer.sort();
}