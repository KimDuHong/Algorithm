#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int tmp = right - left + 1;
    for (int i = 0; i < tmp; i++)
    {
        int row = (left+i) / n;
        int col = (left+i) % n;
        int value = (row < col ? col : row) + 1;
        answer.push_back(value);
    }
    return answer;
}