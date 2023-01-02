#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int find_element(int num, int s)
{
    if (num  % s == 0)
    {
        return num/s;
    }
    else return num/s + 1;
}
vector<int> solution(int n, int s) {
    vector<int> answer;
    vector<int> set;
    if (n > s)
    {
        answer.push_back(-1);
        return answer;
    }
    else if ( n == s)
    {
        answer.push_back(1);
        return answer;
    }
    int count = 0;
    while (set.size() < n)
    {
        int element = find_element(s,n-count);
        set.push_back(element);
        s -= element;
        if (set.size()+1==n)
        {
            set.push_back(s);
        }
        count++;
    }
    sort(set.begin(),set.end());
    answer = set;
    return answer;
}