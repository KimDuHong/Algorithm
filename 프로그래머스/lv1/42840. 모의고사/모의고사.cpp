#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int supo1[]={1, 2, 3, 4, 5};
    int supo2[]={2, 1, 2, 3, 2, 4, 2, 5};
    int supo3[]={3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> score = {0,0,0};
    for ( int i = 0; i < answers.size(); i++){
        if ( answers[i] == supo1[i % 5]) {
            score[0]+=1;
        }
        if ( answers[i] == supo2[i%8]) {
            score[1]+=1;
        }
        if ( answers[i] == supo3[i%10]) {
            score[2]+=1;
        }
    }
    int max = *max_element(score.begin(), score.end());
    for ( int k = 0; k < score.size()+1; k++){
        if (max == score[k]) answer.push_back(k+1);
    }
    return answer;
}