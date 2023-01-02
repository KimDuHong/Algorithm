#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    deque<int> q1;
    deque<int> q2;
    int len = queue1.size() > queue2.size() ? queue1.size() : queue2.size();
    long long q1_sum=0;
    long long q2_sum=0;
    long long total = 0;
    for (auto q : queue1)
    {
        q1_sum+=q;
    }
    for (auto q : queue2)
    {
        q2_sum+=q;
    }
    
    total = q1_sum + q2_sum ; 
    if (total % 2 != 0) return -1;
    
    while (!queue1.empty())
    {
        q1.push_front(queue1.back());
        queue1.pop_back();
    }
     while (!queue2.empty())
    {
        q2.push_front(queue2.back());
        queue2.pop_back();
    }
    
    for (int i = 0; i < len * 3; i++)
    {
        if (q1_sum == q2_sum) return answer;
        else if (q1_sum > q2_sum)
        {
            q1_sum-=q1.front();
            q2_sum+=q1.front();
            q2.push_back(q1.front());
            q1.pop_front();
            answer++;
        }
        else if (q1_sum < q2_sum)
        {
            q2_sum-=q2.front();
            q1_sum+=q2.front();
            q1.push_back(q2.front());
            q2.pop_front();
            answer++;
        }
        else return answer;
    }
    return -1;
}