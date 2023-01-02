#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = arr[0];
    int min_index = 0;
    if (arr.size() != 1){
    for (int i = 0; i< arr.size(); i++){
        if (arr[i] <= temp ) {
            temp = arr[i];
            min_index = i;
        }
    }
    arr.erase(arr.begin()+min_index);
    for (int i = 0; i < arr.size(); i++)
    answer.push_back(arr[i]);
    }
    else answer.push_back(-1);
    return answer;
}