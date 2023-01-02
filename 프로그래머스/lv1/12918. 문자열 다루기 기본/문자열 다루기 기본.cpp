#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size()== 4 | s.size()==6){
    for ( int i = 0; i < s.size(); i++){
        if (s[i]>=97 &s[i]<=122 | s[i]>=65 &s[i]<=90 ){
            return false;
        }
    }
    }else return false;
    return answer;
}