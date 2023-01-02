#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int check_want(vector<string> v,vector<string> want, vector<int> number)
{
    for (int i = 0 ; i < want.size(); i++)
    {
      if(count(v.begin(), v.end(), want[i]) < number[i])
      {
          return 0;
      }
    }
    return 1;
}
int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<string> market;
    
    for (int i = 0 ; i <=discount.size()-10; i++)
    {
        for(int k = i; k < discount.size(); k++)
        {
            if (market.size() == 10) break;
            market.push_back(discount[k]);
        }
        answer+= check_want(market,want,number);
        market.clear();
        
    }
    return answer;
}