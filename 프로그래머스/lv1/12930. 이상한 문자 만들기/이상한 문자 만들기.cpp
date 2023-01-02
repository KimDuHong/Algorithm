#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int index = 0;
    string answer;
    for ( int i = 0; i < s.length(); i++){
        if ( s[i] == ' ' ){
             index = 0;
            continue;
        }
        if (index %2 == 0){
            s[i] = toupper(s[i]);
        }
        else s[i] = tolower(s[i]);
        index++;

}
    answer += s;  
     return answer;
}