#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> m;

long long find_room(long long num)
{
    if (m[num] == 0) return num;
    else return m[num] = find_room(m[num]);
}
vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;

    for (auto num : room_number)
    {
        long long n = find_room(num);
        answer.push_back(n);
        m[n] = n+1;
    }
    return answer;
}