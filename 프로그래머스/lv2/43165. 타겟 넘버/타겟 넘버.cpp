#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    vector<string> v;
    for (int i = 0; i<1<<numbers.size(); i++)
    {
        int sum = 0;
        for ( int j = 0; j < numbers.size(); j++)
        {
            if ( i & (1 << j))
            {
                sum +=numbers[j];
            }
            else sum-=numbers[j];
        }                           
        if (sum ==target)
                {
                    answer++;
                }
    }
    return answer;
}