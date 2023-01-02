#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    for (int i = 1; i < triangle.size(); i++)
    {
        for (int k = 0; k < triangle[i].size(); k++)
        {
            int max = 0;
            if (k == 0)
            {
                max = triangle[i-1][0];
            }
            else if (k == triangle[i].size()-1)
            {
                max = triangle[i-1][k-1];
            }
            else 
            {
                triangle[i-1][k-1] > triangle[i-1][k]? max = triangle[i-1][k-1] : max = triangle[i-1][k];
            }
            triangle[i][k] += max;
        }
    }
    answer = *max_element(triangle[triangle.size()-1].begin(), triangle[triangle.size()-1].end());
    return answer;
}