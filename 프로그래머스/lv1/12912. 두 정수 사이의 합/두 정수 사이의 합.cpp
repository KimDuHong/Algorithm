#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int max = 0;
    int min = 0;
    if (a > b){
        max = a;
        min = b;
    }
    else if ( a<b){
        max = b;
        min = a;
    }
    else if (a=b){
        return a;
    }
    for (max; max >= min; max--){
        answer +=max;
    }
    return answer;
}