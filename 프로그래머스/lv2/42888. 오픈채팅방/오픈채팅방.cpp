#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;
 
    while (getline(ss, tmp, delimiter)) result.push_back(tmp);
 
    return result;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> enter;
    for (string k : record)
    {
        vector <string> result = split(k, ' ');
        if (result[0] == "Enter")
        {
            enter[result[1]] = result[2];
        }
        else if ( result[0]== "Change")
        {
            enter[result[1]] = result[2];
        }
    }
    for (string t : record)
    {
        vector <string> result = split(t, ' ');
        if (result[0]=="Enter")
        {
            answer.push_back(enter[result[1]] + "님이 들어왔습니다.");
        }
        else if ( result[0] == "Leave")
        {
            answer.push_back(enter[result[1]] + "님이 나갔습니다.");
        }
    }
    return answer;
}