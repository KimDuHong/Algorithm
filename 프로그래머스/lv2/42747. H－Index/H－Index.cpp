#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int max = 0;
    for (int i = 0; i < citations.size(); i++)
    {
        if (max < citations[i])
        {
            max = citations[i];
        }
    }
    
    for (int i = max; i > 0; i--)
    {
        int count = 0;
        for (int k = 0; k <citations.size(); k++)
        {
            if (citations[k] >= i)
            {
                count++;
            }
        }
        if (count >=i)
        {
            answer = i;
            break;
        }
    }
    return answer;
}