#include <string>
#include <vector>

using namespace std;
int to_2(int num)
{
    int result = 0;
    for (int i = 1; num>0; i*=10)
    {
        int binary = num%2;
        if (binary == 1)
        {
            result +=1;
        }
        num/=2;
    }
    return result;
}
int solution(int n) {
    int answer = 0;
    int orgin_num = to_2(n);
    for ( int i = 1 ; ; i++)
    {
        if ( orgin_num == to_2(n+i))
        {
            answer = n+i;
            break;
        }
    }
    return answer;
}