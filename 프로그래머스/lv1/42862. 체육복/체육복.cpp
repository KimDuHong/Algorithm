#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    answer = n - lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    if ( answer != n){
        for ( int i = 0; i < lost.size(); i++){
            for ( int k = 0; k < reserve.size(); k++){
        
                  if (reserve[k] == lost[i]){
                      answer++;
                      lost.erase(lost.begin()+i);
                        i--;
                        reserve.erase(reserve.begin()+k);
                        k--;
                  }  
                }
            }
        for ( int i = 0; i < lost.size(); i++){
        for ( int k = 0; k < reserve.size(); k++){
            if ( reserve[k] - lost[i] == -1 ){
                answer++;
                lost.erase(lost.begin()+i);
                i--;
                reserve.erase(reserve.begin()+k);
                k--;
            }else if (reserve[k] - lost[i] == 1){
                answer++;
                lost.erase(lost.begin()+i);
                i--;
                reserve.erase(reserve.begin()+k);
                k--;
            }
    }
        }
    }
    else return n;
    if (answer <= n) return answer;
}