#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string num = to_string(n);
    sort(num.rbegin(),num.rend());
    return stoll(num);
}