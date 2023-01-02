#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
    int answer = 0;
    priority_queue<int> pq;
    if(enemy.size() <= k)
    {
        return enemy.size();
    }
    int round = 0;

    for(auto i : enemy)
    {
        round +=1;
        n-=i;
        pq.push(i);
        if(n<0)
        {
            if(k>0)
            {
                k--;
                n+=pq.top();
                pq.pop();
            }
            else 
            {
                round-=1;
                break;
            }
        }
    }
    answer = round;
    return answer;
}