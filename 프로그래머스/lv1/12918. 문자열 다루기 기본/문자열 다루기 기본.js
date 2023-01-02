function check_string(s)
{
    for (let i = 0 ; i < s.length; i++)
        {
            if((s[i] >='0') && (s[i] <='9'))
                {
                    continue;
                }
            else return false;
        }
    return true;
}
function check_length(s)
{
    if ((s.length == 4) | (s.length == 6))
        {
            return true;
        }
    return false;
}
function solution(s) {
    var answer = true;
    if(check_length(s))
        {
            if(check_string(s))
                {
                    return true;
                }
        }
    return false;

}
