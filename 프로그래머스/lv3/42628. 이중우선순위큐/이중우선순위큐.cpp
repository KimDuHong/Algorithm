#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> v;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][0] == 'I')
        {
            v.push_back(stoi(operations[i].substr(1)));
        }
        else if (operations[i] == "D 1")
        {
            int idx = max_element(v.begin(), v.end()) - v.begin();
            if (v.size() == 0) continue;
            v.erase(v.begin() + idx);
        }
        else if (operations[i] == "D -1")
        {
            int idx = min_element(v.begin(), v.end()) - v.begin();
            if (v.size() == 0) continue;
            v.erase(v.begin() + idx);
        }          
    }
    vector<int> answer;
    int max = 0;
    int min = 0;
    if (v.size() == 0)
    {
        answer.push_back(max);
        answer.push_back(min);
        return answer;
    }
    max = *max_element(v.begin(), v.end());
    min = *min_element(v.begin(), v.end());
    answer.push_back(max);
    answer.push_back(min);
    return answer;
}