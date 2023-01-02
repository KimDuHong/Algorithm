#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> info) {
    vector<int> answer(11);
    vector<int> temp(11);
    int count = 0;
    int max = 0;
    for (int i = 1; i < (1<<10); i++)
    {
        int ryan_score = 0, apeach_score = 0, cnt =0; 
        for ( int j = 0; j < 10; ++j)
        {
            if (i & (1<<j))
            {
                ryan_score+=10-j;
                temp[j] = info[j]+1;
                cnt += temp[j];              
            }
            else 
            {
                temp[j] = 0;
                if (info[j]>0)
                {
                    apeach_score+=10-j;
                }
            }        
        }  
        if (cnt > n) 
            {
                continue;
            }
            temp[10] = n - cnt;
        if ( ryan_score - apeach_score == max)
        {
            for ( int i  = 10; i >=0; i--)
            {
                if (temp[i]> answer[i])
                {
                    answer = temp;
                }
                else if (temp[i]<answer[i])
                {
                    break;
                }
            }
        }
        if ( ryan_score - apeach_score > max)
        {
            max = ryan_score - apeach_score;
            answer = temp;
        }

    }
    if (max==0) return {-1};
    return answer;
}