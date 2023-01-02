#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = false;
        for (int k = 1; k<=i; k++)
        {
            if(s[i-k] == s[i])
            {
                answer.push_back(k);
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            flag = false;
            continue;
        }
        else answer.push_back(-1);
    }
    return answer;
}