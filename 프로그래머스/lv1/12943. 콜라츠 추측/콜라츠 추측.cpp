#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long temp = num;
    int count = 0;
    for ( int i = 0; temp != 1; i++){
        if (count >= 500) return -1;
        if (temp%2==0) temp/=2;
        else temp = temp*3 + 1;
        count ++;
    }
    return count;
}