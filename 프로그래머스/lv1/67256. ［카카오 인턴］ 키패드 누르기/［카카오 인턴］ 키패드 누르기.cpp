#include <string>
#include <vector>
#include <math.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left_hand = 10;
    int right_hand = 12;
    int left_dis = 0;
    int right_dis=0;
    for ( int i = 0; i < numbers.size(); i++){
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] ==7){
            answer += 'L';
            left_hand = numbers[i];
        }else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] ==9){
            answer += 'R';
            right_hand = numbers[i];
            }else if (numbers[i] == 2 || numbers[i] == 5 || numbers[i] ==8 || numbers[i] == 0){
            if (numbers[i] == 0 ){
                numbers[i] = 11;
            }
            int left_temp = abs(left_hand - numbers[i]);
            int right_temp = abs(right_hand - numbers[i]);
            
            left_dis = (left_temp/3) + (left_temp%3);
            right_dis = (right_temp/3) + (right_temp%3);
            
            if (left_dis == right_dis){
                if (hand == "left"){
                    answer+= 'L';
                    left_hand= numbers[i];
                }else {
                    answer+='R';
                    right_hand = numbers[i];
                }
            }else if (left_dis < right_dis){
                answer+='L';
                left_hand=numbers[i];
            }else {
                answer+='R';
                right_hand = numbers[i];
            }
            
        }
    }
    return answer;
}