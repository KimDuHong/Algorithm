function solution(price, money, count) {
    var answer = 0;
    let i = 1;
    while(1)
        {
            money = money -price*i;
            count--;
            if (count == 0)
                {
                    answer = -money;
                    if(money > 0)
                        {
                            answer = 0;
                        }
                    break;
                }
            i+=1;
        }
    return answer;
}

