#include <string>
#include <vector>
#include <cmath>

using namespace std;

int yaksu(int num)
{
    int count = 0;
    for (int i = 1; i <sqrt(num); i++)
    {
        if (num%i == 0)
        {
            count++;
        }
    }
    count *=2;
    if(int(sqrt(num)) * int(sqrt(num))== num) count+=1;
    return count;
}
int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v_count;
    for (int i = 1; i <= number; i++)
    {
       int count = yaksu(i);
       if (count > limit)
       {
           count = power;
       }
       v_count.push_back(count);
    }
    for (auto& i : v_count)
    {
        answer += i;
    }
    return answer;
}