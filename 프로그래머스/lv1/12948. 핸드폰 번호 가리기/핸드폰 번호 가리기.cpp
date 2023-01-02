#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string temp = phone_number.substr(phone_number.length()-4);
    for (int i = 0; i < phone_number.length()-4 ; i++)
    {
        answer.append("*");
    }
    answer.append(temp);
    return answer;
}