#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> day ={"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int temp = 0;
    for ( int i = 1; i < a; i++){
        temp += month[i-1];
    }
    temp +=b;
    answer = day[(temp-1)%7];
    return answer;
}