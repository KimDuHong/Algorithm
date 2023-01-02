#include <string>
#include <vector>

using namespace std;

int check_0(vector<int> lottos_num){
    int count = 0;
    for ( int i = 0 ; i < lottos_num.size(); i++){
        if (lottos_num[i] == 0) count++;
    }
    return count;
}
int check_result(vector<int> lottos, vector<int> win_nums){
    int count = 0;
    for (int i = 0; i < lottos.size(); i++){
        for ( int j = 0; j < win_nums.size(); j++){
            if (lottos[i]==win_nums[j]) count++;
        }
    }
    return count;
}
int prize(int count){
    return 7-count;
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count_0 = check_0(lottos);
    int base = prize(check_result(lottos, win_nums));
    answer.push_back(base - count_0);
    answer.push_back(base);
    for (int i = 0; i < answer.size(); i++){
        if (answer[i] ==7) answer[i] = 6;
    }
    return answer;
}