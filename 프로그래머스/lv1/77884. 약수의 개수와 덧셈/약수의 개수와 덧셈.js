function check(num)
{
    if(Number.isInteger(Math.sqrt(num)))
        {
            return true;
        }
    else return false;
}
function solution(left, right) {
    var answer = 0;
    for (let i = left; i <= right; i++)
        {
            if(check(i))
                {
                    answer -=i;
                }
            else answer +=i;
        }
    return answer;
}