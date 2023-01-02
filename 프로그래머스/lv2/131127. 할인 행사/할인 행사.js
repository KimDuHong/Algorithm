function check_want(market,want,number)
{
    for (let k = 0; k < want.length; k++)
        {
            if(number[k] > market.reduce((count, data) => 
             data == want[k] ? count + 1 : count, 0))
                {
                    return 0;
                }
        }
    return 1;
}

function solution(want, number, discount) {
    var answer = 0;
    let market = [];
    for (let i = 0 ; i <= discount.length-10; i++)
        {
            for (let k = i; k<discount.length; k++)
                {
                    if(market.length == 10) break;
                    market.push(discount[k]);
                }
            answer+=check_want(market,want,number);
            market.length = 0;
        }
    return answer;
}