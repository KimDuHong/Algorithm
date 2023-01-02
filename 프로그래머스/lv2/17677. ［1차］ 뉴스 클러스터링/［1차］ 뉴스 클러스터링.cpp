#include <string>
#include <set>
#include <algorithm>


using namespace std;
bool isAlpha(string s)
{
    for (int i = 0; i < s.size(); i ++)
    {
        if (s[i]>= 'a' && s[i] <= 'z')
        {
            continue;       
        }
        return false;           
    }
    return true;
}
int solution(string str1, string str2) {
    int answer = 0;
    vector<string> s1;
    vector<string> s2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    for (int i = 0; i < str1.size()-1; i++)
    {
        if (!isAlpha(str1.substr(i,2)))
        {
            continue;
        }
        s1.push_back(str1.substr(i,2));              
    }
    for (int i = 0; i < str2.size()-1; i++)
    {
        if (!isAlpha(str2.substr(i,2)))
        {
            continue;
        }
        s2.push_back(str2.substr(i,2));                 
    }
    if (s1.size() + s2.size() == 0 )
    {
        return 65536;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    int hap = s1.size() + s2.size();
    
    int gong = 0;
    for (int i = 0; i < s1.size(); ++i )
    {
        for (int k = 0; k < s2.size(); ++k)
        {
            if(s1[i] == s2[k])
            {
                gong+=1;
                s1.erase(s1.begin() + i);
                s2.erase(s2.begin() + k);
                i = -1;
                k = -1;
            }
        }
    }
    answer = gong *65536 / (hap - gong);
    return  answer;
}