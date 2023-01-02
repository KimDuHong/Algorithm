#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); i++)
    {
        while(1)
        {
            if(babbling[i].size() == 0)
            {
                answer++;
                break;
            }
            if(babbling[i].substr(0,3) == "aya" )
            {
                babbling[i].erase(0,3);
                if(babbling[i].size() >=3 && babbling[i].substr(0,3) =="aya")
                {
                    break;
                }
            }
            else if (babbling[i].substr(0,3) == "woo")
            {
                babbling[i].erase(0,3);
                if(babbling[i].size() >=3 && babbling[i].substr(0,3) =="woo")
                {
                    break;
                }
            }
            else if (babbling[i].substr(0,2) == "ye")
            {
                babbling[i].erase(0,2);
                if(babbling[i].size() >=2 && babbling[i].substr(0,2) =="ye")
                {
                    break;
                }
            }
            else if (babbling[i].substr(0,2) == "ma")
            {
                babbling[i].erase(0,2);
                if(babbling[i].size() >=2 && babbling[i].substr(0,2) =="ma")
                {
                    break;
                }
            }
            else break;
        }
    }
    return answer;
}