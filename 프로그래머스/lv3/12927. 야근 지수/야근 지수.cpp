#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> q(works.begin(),works.end());
    while (n > 0)
    {
       if (q.top() ==0)
       {
           return 0;
       }
        else
        {
            q.push(q.top()-1);
            q.pop();
        }
       n-=1;
    }
    while(q.size() > 0)
    {
        answer+= q.top()*q.top();
        q.pop();
    }
    return answer;
}