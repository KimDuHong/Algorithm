#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> pair;
    for ( int i = 0; i< s.size(); i++)
    {
        if(!pair.empty())
        {
            if (pair.top()==s[i])
            {
                pair.pop();
            }
            else
                pair.push(s[i]);
        }
        else
            pair.push(s[i]);
    }
    if ( pair.empty() == true)
    {
        return 1;
    }
    else return 0;
}