#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (int i = 0 ; i <prices.size(); i++)
    {
        int tmp = 0;
        for (int k = i+1; k < prices.size(); k++)
        {
            tmp++;
            if (prices[i] <= prices[k])
            {
                continue;
            }
            else 
            {
                break;
            }
        }
        answer.push_back(tmp);
    }
    return answer;
}