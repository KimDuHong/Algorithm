#include <string>
#include <vector>


using namespace std;
long long fibonachi (int num){
    long long F[100001];
    F[0] = 0;
    F[1] = 1;
    for ( int i = 2; i <= num; i++)
    {
        F[i] = (F[i-1] + F[i-2]) % 1234567;
    }
    return F[num];
}
                                                         
int solution(int n) {
    long long answer = 0;
    answer = fibonachi(n) % 1234567;
    return answer;
}