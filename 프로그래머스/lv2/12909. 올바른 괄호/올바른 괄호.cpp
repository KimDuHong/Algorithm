#include<string>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int temp = 0;
    stack<char> stk;
    if ( s. size() % 2 == 1)
    {
        return false;
    }
    if (s[0] == ')')
    {
        return false;
    }
    if (s.back() == '(')
    {
        return false;
    }
    for ( int i =  0; i < s.size(); i ++)
    {
       if ( s[i] == '(') 
       {
           stk.push('(');
       }
        else 
        {
            if (stk.top() == '(')
            {
                stk.pop();
            }
            else stk.push(')');
        }
    }
    if (stk.empty())
    {
        return true;
    }
    else return false;
}