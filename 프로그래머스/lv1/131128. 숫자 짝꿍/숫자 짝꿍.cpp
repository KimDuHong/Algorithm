#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char,int> visited;
    
    for (char c : X)    
    {
        visited[c]++;
    }
    
    for (char c : Y)
    {
        if (visited[c] != 0)
        {
            answer+=c;
            visited[c]--;
        }
    }
    if(answer.size() == 0)
    {
        return "-1";
    }
    sort(answer.rbegin(),answer.rend());
    if (answer[0] == '0')
    {
        answer = "0";
    }
    return answer;
}