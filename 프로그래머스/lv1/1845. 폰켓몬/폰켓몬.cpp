#include <vector>
#include <algorithm>
#include <set>s
using namespace std;

int solution(vector<int> nums)
{
    set<int> temp;
    int answer = 0;
    sort(nums.begin(), nums.end());
    unique(nums.begin(),nums.end());
    for ( int i = 0; i < nums.size()/2; i++){
        temp.insert(nums[i]);
    }
    answer = temp.size();
    return answer;
}