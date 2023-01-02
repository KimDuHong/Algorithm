#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    for (int i = 0; i < land.size()-1; i++)
    {
        for (int k = 0; k<land[0].size(); k++)
        {
            int max = 0;
            for (int j = 0; j < land[0].size(); j++)
            {
                if (j == k) continue;
                if (max < land[i][j])
                {
                    max = land[i][j];
                }
            }
            land[i+1][k] += max;
        }                       
    }
    int max = 0;
    for (int i = 0; i < land[0].size(); i++)
    {
        if (max < land[land.size()-1][i])
        {
            max = land[land.size()-1][i];
        }
    }
    return max;
}