#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> v;
    vector<pair<int,vector<int>>> p;
    string s_num = "";
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] >= '0' && s[i] <='9')
        {
            s_num+=s[i];
        }
        else if (s[i] == ',')
        {
            if (s[i-1] == '}')
            {
                continue;
            }
            v.push_back(stoi(s_num));
            s_num = "";
        }
        else if (s[i] == '}')
        {
            v.push_back(stoi(s_num));
            s_num = "";
            p.push_back(make_pair(v.size(),v));
            v.clear(); 
        }
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i].first == i+1)
        {
            for (int num : p[i].second)
            {
               if (find(answer.begin(), answer.end(), num) == answer.end())
               {
                   answer.push_back(num);
               }
            }
        }
    }
    return answer;
}