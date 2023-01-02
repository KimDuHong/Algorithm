#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer;
    char start =' ';
    for (char c : s){
        char start = (c >='a' && c<='z'? 'a':'A');
        if (c != ' '){
            c= ((c+n-start)%26+start);
        }
        answer.push_back(c);
    }
    return answer;
    
}