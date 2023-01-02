#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

string find(int x)
{
    string answer = ""; 
    int i = 1;
    while(x>i)
    {
        x-=i;
        i++;
    }
    if (i % 2 == 0)
    {
        answer = to_string(x) + "/" + to_string(i-x+1);
    }
    else answer =  to_string(i-x+1) + "/" + to_string(x);
    return answer;
}
int main()
{
    int x = 0;
    cin >> x;
    cout << find(x);
}