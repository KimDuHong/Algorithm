#include <string>
#include <vector>

using namespace std;
string convert_num(int num, int n){
    char code[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string tmp = "";
    while(num/n!=0){
        tmp = code[num%n] + tmp;
        num = num/n; 
    }
    tmp = code[num%n]+tmp;
    return tmp;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string tmp = "";
    
    int i=0;
    while(tmp.size()<=t*m){
        tmp += convert_num(i,n);
        i++;
    }
    
   for (int i = 0; answer.size() < t; i +=m)
   {
       answer+= tmp[i+p-1];
   }
    return answer;
}