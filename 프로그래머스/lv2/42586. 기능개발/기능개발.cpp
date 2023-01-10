
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day;
    for ( int i = 0; i < speeds.size(); i ++)
    {
        int temp = 100 - progresses[i];
        if ( temp % speeds[i] != 0 )
        {
            temp = temp / speeds[i] + 1;
        }else temp = temp / speeds[i];
        day.push_back(temp);
    }
    queue<int> q;
    for (int d:day)
    {
        if (q.empty())
        {
        q.push(d);
        }
        else
        {
            if (q.front() < d)
            {
                answer.push_back(q.size());
                while( !q.empty())
                {
                    q.pop();
                }
                q.push(d);
            }
            else 
            {
                q.push(d);
            }
        }
    }
    if (!q.empty()) answer.push_back(q.size());
    return answer;
}
