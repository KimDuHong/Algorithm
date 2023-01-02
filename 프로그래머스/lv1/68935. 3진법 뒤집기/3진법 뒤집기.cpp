#include <string>
#include <vector>
#include <math.h>

using namespace std;
int solution(int n) {
    vector<int> v;
    int answer = 0;
    for (;n!=0;){
        v.push_back(n%3);
        n/=3;
    }
    for ( int i = v.size()-1; i >= 0; i--){
        answer += v[i] * (int)pow(3,v.size()-i-1);
    }
    return answer;
}