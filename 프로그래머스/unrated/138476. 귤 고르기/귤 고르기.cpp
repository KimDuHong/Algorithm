#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> v;
    map<int,int> m;
    for (auto i : tangerine)
    {
        m[i] +=1;
    }
    int max = 0;
    for (auto iter : m) {
        v.push_back(iter.second);
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for (auto i : v)
    {
       if(sum<k)
       {
           sum+=i;
           answer++;
       }
    }

    return answer;
}