#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    double root = sqrt(n);
    if (root - (int)root == 0){
        return (root+1)*(root+1);
    }
    else return -1;
}