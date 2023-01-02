#include <string>
#include <vector>

using namespace std;
int dp[2001];

long long solution(int n) {
    long long answer = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i ++)
    {
        dp[i] = dp[i-2] % 1234567 + dp[i-1] % 1234567;
    }
    dp[n]%=1234567;
    return dp[n];
}