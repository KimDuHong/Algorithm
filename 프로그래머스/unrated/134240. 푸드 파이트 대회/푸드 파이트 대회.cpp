#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for (int i = 1; i < food.size(); i++)
    {
        if(food[i] == 1)
        {
            continue;
        }
        else
        {
            for (int k = 0; k < food[i]/2; k++)
            {
                answer+=to_string(i);
            }
        };
    }
    string reverse_answer = answer;
    reverse(reverse_answer.begin(), reverse_answer.end());
    answer+="0" + reverse_answer;
    return answer;
}