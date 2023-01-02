#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n != 0){
        int i = n % 10;
        answer.push_back(i);
        n= n/10;
    }
    return answer;
}