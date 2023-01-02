#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int dp[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    dp[1][1] = 1;
    for (auto water : puddles)
    {
        dp[water[0]][water[1]] = -1;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = 0;
            int b = 0;
           if (dp[i][j] == -1) continue;
            if (dp[i-1][j] != -1)
            {
                a = dp[i-1][j];
            }
            if (dp[i][j-1] != -1)
            {
                b = dp[i][j-1];
            }
            dp[i][j] += (a +b) % 1000000007;
        }
    }

    int answer = 0;
    answer = dp[m][n];
    return answer;
}