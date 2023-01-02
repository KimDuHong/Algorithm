#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max = 0;
    int min = 0;
    if (n > m){
        max = n;
        min = m;
    }
    else if ( m > n){
        max = m;
        min = n;
    }
    else if ( m = n){
        answer.push_back(m);
        answer.push_back(m);
    }
    for ( int i = min; i > 0; i--){
        if ( max % i == 0 && min % i == 0 ){
            answer.push_back(i);
            break;
        }
    }
    answer.push_back(max * min / answer.back());
    return answer;
}