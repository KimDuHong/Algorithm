#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int index=0;
    if (arr.size()>2){
         for (int i = 0; i<arr.size(); i++){
             if (arr[i] != arr[i+1])
             {
                 answer.push_back(arr[i]);
             }
             else if (i==arr.size()-1){
                 if ( arr[i] == arr[i-1] )
                 answer.push_back(arr[arr.size()]);
             }
        
         }
    }
    else answer.push_back(arr[1]);
   
    return answer;
}