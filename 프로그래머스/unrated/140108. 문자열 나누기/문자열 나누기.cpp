#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count_1 = 0;
    int count_2 = 0;
    char tmp = ' ';
    for (int i = 0; i < s.size(); i++)
    {
        if (tmp == ' '){
            tmp = s[i];
        }
        
        if(tmp == s[i]) count_1++;
        else count_2++;
        
        if(count_1 == count_2)
        {
            s.erase(0,i+1);
            count_1 =0;
            count_2 =0;
            tmp = ' ';
            i=-1;
            answer++;
        }
    }
    if (s.size() !=0) answer++;
    return answer;
}