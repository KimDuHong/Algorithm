#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long arr[5001];
    if (n%2==1) return 0;
    arr[0] = 1;
    arr[2] = 3; 
    for (int i = 4; i <= n; i+=2)
    {
        arr[i] = arr[i-2]*3;
        for ( int j = 0; j <= i-4; j+=2)
        {
            arr[i]+=arr[j]*2 % 1000000007;
        }
        arr[i] %= 1000000007;
    }
    answer = arr[n] % 1000000007;
    return answer;
}