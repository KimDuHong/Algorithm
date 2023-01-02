#include <iostream>

using namespace std;
int count = 0;

void next(int a, int b)
{
    if (a==b)
    {
        return;
    }
    if(a%2==0)
    {
        a/=2;
    }
    else if (a%2==1)
    {
        a= (a+1)/2;
    }
    if (b%2==0)
    {
        b/=2;
    }
    else if (b%2==1)
    {
        b= (b+1)/2;
    }
    count++;
    next(a,b);
}
int solution(int n, int a, int b)
{
    int answer = 0;
    next(a,b);
    answer = count;
    return answer;
}