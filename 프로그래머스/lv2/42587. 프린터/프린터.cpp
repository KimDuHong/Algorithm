#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i,priorities[i]));
        pq.push(priorities[i]);
    }
    while(1)
    {
        int idx = q.front().first;
        int value = q.front().second;
        
        if (value == pq.top())
        {
            answer++;
            pq.pop();
            q.pop();
            if (idx == location)
            {
                break;
            }
        }
        else
        {
            q.pop();
            q.push(make_pair(idx,value));
        }
        
    }
    return answer;
}