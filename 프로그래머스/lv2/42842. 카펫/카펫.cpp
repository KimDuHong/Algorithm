#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int area = brown + yellow;
    for (int curY = 3;curY<=area;curY++)
    {  
        int curX = area / curY;
        if(area%curY!=0) continue;
        if (brown == curX*2 + curY*2-4)
        {
            if (yellow == (curX-2) * (curY-2))
            {
                answer.push_back(curX);
                answer.push_back(curY);
                break;
            }          
        }
    }
    return answer;
}