#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int array[8]= {0,3,2,1,0,1,2,3};
    unordered_map<char,int> m;
       
    for (int i = 0; i < survey.size(); i ++)
    {
        string tmp = survey[i];
        if(choices[i] > 4)
        {
            m[tmp[1]] += array[choices[i]];
        }
        else m[tmp[0]] += array[choices[i]];
    }
    answer += m['R'] >= m['T'] ? "R" : "T";
    answer += m['C'] >= m['F'] ? "C" : "F";
    answer += m['J'] >= m['M'] ? "J" : "M";
    answer += m['A'] >= m['N'] ? "A" : "N";
    
    return answer;
}