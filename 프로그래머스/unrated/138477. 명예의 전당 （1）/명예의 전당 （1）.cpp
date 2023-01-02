#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> award;
    for (int i = 0; i < score.size(); i++)
    {
        if(award.size() < k)
        {
            award.push_back(score[i]);
        }
        else if(*min_element(award.begin(),award.end()) < score[i])
        {
            award.push_back(score[i]);
            award.erase(min_element(award.begin(), award.end()));
        }
        answer.push_back(*min_element(award.begin(),award.end()));
    }
    return answer;
}