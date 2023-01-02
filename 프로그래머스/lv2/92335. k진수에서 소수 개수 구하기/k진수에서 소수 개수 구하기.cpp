#include <string>
#include <vector>
#include <math.h>

using namespace std;

string convert_num(int n, int k) {
    string ret = "";
    
    while(n) {
        ret += to_string(n % k);
        n /= k;
    }
    
    return string(ret.rbegin(), ret.rend());
}
bool sosu_check(long long n)
{
    if (n < 2) return false;
      for ( int i = 2; i <= sqrt(n); ++i)
        {
          if ( n % i == 0)
            {
            return false;
            }
      }
    return true;
}
long long check(vector<long long> nums)
{
    int count = 0;
    for (int k  = 0; k < nums.size(); k++)       
    {
       if (sosu_check(nums[k]))
       {
           count++;
       }
    }
    return count;
}
long long slice_num(string num)
{
    string temp = "";
    int count = 0;
    vector<long long> nums;
    for ( int i = 0; i < num.length(); ++i)
    {
        if (num[i] == '0' && !temp.empty())
        {
            nums.push_back(stoll(temp));
            temp ="";
        }
        else temp += num[i];
    }
    if (!temp.empty())
    {
        nums.push_back(stoll(temp));
    }
    count = check(nums);
    return count;
}

int solution(int n, int k) {
    int answer = 0;
    string sosu = convert_num(n,k);
    answer = slice_num(sosu);
    return answer;
}