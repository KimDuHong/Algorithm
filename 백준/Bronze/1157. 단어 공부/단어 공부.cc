#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    map<char,int> m;
    cin >> input;
    for (auto i : input)
    {
        m[toupper(i)]++;
    }
    
    int max = 0;
    
    char answer;
    
    for(auto it = m.begin(); it != m.end(); it++){
        if (max < it->second)
        {
            max = it->second;
            answer = it->first;
            continue;
        }
    }
    int cnt = 0;
    for(auto it =m.begin(); it != m.end(); it++)	
    {
        if(it->second == max)	
        {
            cnt ++;
        }
        if(cnt >=2){
            cout << '?';
            return 0;
        }
    }

         cout <<answer;
}