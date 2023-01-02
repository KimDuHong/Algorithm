#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int findIndex(vector<string> words, string tmp, int index)
{
    for ( int i =index; i < words.size(); i++)
    {
        if (i == index ) continue;
        if (words[i] == tmp)
        {
            return i;
        }
    }
    return 0;
}
vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    for (int i = 0; i < words.size()-1; i++)
    {
        string tmp = words[i];
        string next = words[i+1];
        int index = i;
        if(findIndex(words,tmp, index) !=0)
        {
            if(findIndex(words,words[i+1], index+1) ==0){
            answer.push_back(findIndex(words,tmp,index) % n + 1);
            answer.push_back(findIndex(words,tmp,index) / n + 1);
            break;
            }
            else continue;
        }
        if (tmp[tmp.size()-1]== next[0])
        {
            if (i == words.size()-2)
            {
                answer.push_back(0);
                answer.push_back(0); // 전부 통과 case
            }
            continue;
        }      
        else { 
            answer.push_back((i+1) % n + 1) ;
            answer.push_back((i+1) / n +1);
            break;
            }
    }
    return answer;
}