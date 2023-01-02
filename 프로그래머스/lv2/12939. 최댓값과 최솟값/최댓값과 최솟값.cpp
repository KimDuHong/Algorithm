#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> num;
    int start_idx = 0;
    for ( int i = 0; i < s.size(); i++)
    {
        if (s[i] ==' ')
        {
            num.push_back(stoi(s.substr(start_idx, i-start_idx)));
            start_idx = i;
        }
    }
    num.push_back(stoi(s.substr(start_idx+1,s.size()-start_idx+1)));
    sort(num.begin(), num.end());
    answer = to_string(num.front()) + " " + to_string(num.back());
    return answer;
}