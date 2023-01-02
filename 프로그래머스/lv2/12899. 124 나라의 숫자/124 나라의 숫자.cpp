#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int share = n;
    while ( share !=0)
    {
        int temp = share % 3;
        share = share / 3 ;
        if  ( temp == 0)
        {
            answer = "4" + answer;
            share--;
        }
        else if ( temp == 1)
        {
            answer ="1" + answer;
        }
        else if ( temp == 2)
        {
            answer = "2" + answer;
        }
    }
    return answer;
}