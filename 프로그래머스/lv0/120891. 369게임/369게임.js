function solution(order) {
    var answer = 0;
    var text = String(order);
    for (let i = 0 ; i < text.length; i++)
        {
            if(text[i] =="3")
                {
                    answer++;
                }
            else if (text[i] == "6")
                {
                    answer++;
                }
            else if (text[i] =="9")
                {
                    answer++;
                }
        }
    return answer;
}