#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> list)
{
    string answer = list[0];

    
    for (int i = 1; i < list.size(); i++)
    {
        string tmp = list[i];
        for(int k = 0; k < list[i].size(); k++)
        {
            if(tmp[k] == answer[k])
            {
                continue;
            }
            else answer[k] = '?';
        }
    }
    return answer;
}
int main()
{
    int count = 0;
    cin >> count;
    vector<string> list;
    for(int i = 0; i < count; i++)
    {
        string a;
        cin >> a;
        list.push_back(a);
    } 
    cout << solution(list);
}