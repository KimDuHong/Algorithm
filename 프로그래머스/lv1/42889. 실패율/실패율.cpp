#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(pair<double,int> a, pair<double,int> b){
    if(a.first==b.first)return a.second<b.second;
    else return a.first>b.first;

}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>> v;
    map<int,double> m;
    
    int size = stages.size();
    
    for (int i = 0; i <stages.size(); i++)
    {
        m[stages[i]]+=1;
    }
    int fail_num =0;
    for (int k = 1; k <= N; k++)
    {
        if (m[k] == 0)
        {
            v.push_back({0,k});
            continue;
        }
        v.push_back({m[k]/ (size - fail_num),k});
        fail_num +=m[k];
    }
    
   sort(v.begin(),v.end(),cmp);
    for(auto o: v){
       answer.push_back(o.second);
    }
    return answer;
}