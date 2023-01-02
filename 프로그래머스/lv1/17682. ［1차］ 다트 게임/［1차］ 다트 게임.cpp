#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string dartResult) {
    vector<int> sum;
    int temp = 0;
    for (int i = 0; i < dartResult.size(); i ++)
    {
        if (dartResult[i] >= '0' & dartResult[i] <= '9'){
                temp = dartResult[i]; 
                if (dartResult[i+1] == '0')
                    {
                    temp = 10;
                    i++;
                    }
            else temp = dartResult[i] - '0';
            }
        else if (dartResult[i] == 'S' || dartResult[i] == 'D' 
                 || dartResult[i] == 'T'){
            if (dartResult[i] == 'S') sum.push_back(temp);
            if (dartResult[i] == 'D') sum.push_back(temp * temp);
            if (dartResult[i] == 'T') sum.push_back(temp * temp* temp);
        }
        else if (dartResult[i] == '*'){
            if ( sum.size() == 1){
                sum[0] *=2;
            }else {
                sum[sum.size()-1] *=2;
                sum[sum.size()-2]*=2;
        }
        }else if ( dartResult[i] == '#'){
            sum[sum.size()-1] *= -1;
        }
    }
    int answer = 0;
    for ( int i = 0; i < sum.size(); i ++){
        answer += sum[i];
    }
    return answer;
}