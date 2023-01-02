#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
vector<int> all_number;
void all_nums(string nums){
    do { 
        string temp = "";
        for (int i = 0; i < nums.size(); i++) { 
            temp.push_back(nums[i]);
            all_number.push_back(stoi(temp)); 
        } 
       } 
    while (next_permutation(nums.begin(), nums.end()));
    sort(all_number.begin(),all_number.end());
    all_number.erase(unique(all_number.begin(),all_number.end()),all_number.end());
}
bool find_nums(int number){
    if (number < 2) return false;
    for (int i = 2; i <= sqrt(number); i++){
        if (number % i == 0) return false; 
    }
    return true;
}
int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    all_nums(numbers);
    for ( int i = 0;  i <all_number.size(); i++){
        if (find_nums(all_number[i])){
            answer++;
        }
    }
    return answer;
}