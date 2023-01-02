#include <iostream>

using namespace std;

int main()
{
    int orgin, first, sec, tmp,answer = 0;
    cin >> orgin;
    tmp = orgin;
    while(1)
    {
        answer++;
      first = tmp /10;
      sec = tmp % 10;
        int c_first = sec*10;
        int c_sec = first+sec;
      if (c_sec>= 10)
      {
          c_sec-=10;
      }
        tmp = c_first + c_sec;
        if (tmp == orgin)
        {
            break;
        }
        
    }
    cout << answer;


}