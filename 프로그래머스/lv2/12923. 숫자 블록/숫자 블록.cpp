#include <string>
#include <vector>



using namespace std;

int div(int k)
{
    for (int i = 2; i*i<=k; i++)
    {
       if (k % i ==0)           
       {
           if (k/i > 10000000)
           {
               continue;
           }
           return k/i;
       }
    }
    return 1;
}

vector<int> solution(long long begin, long long end) {
    vector<int> answer;   
    for (int i = begin; i <= end; i++)
    {
       if( i == 1) 
       {
           answer.push_back(0);
           continue;
       }
       answer.push_back(div(i));
    }
    return answer;
}
