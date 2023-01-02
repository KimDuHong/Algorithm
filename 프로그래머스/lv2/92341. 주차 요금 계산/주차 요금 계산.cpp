#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int convert(string time)
{
    string hh = time.substr(0,2);
    string mm = time.substr(3);
    return stoi(hh) *60 + stoi(mm);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    unordered_map<string, int> intime;
    map<string, int> price;
    
    for (string r: records)
    {
        string time = r.substr(0,5);
        string car_num = r.substr(6,4);
        string status = r.substr(11);
        if ( status =="IN")
        {
            intime[car_num] = convert(time);
        }
        else
        {
            price[car_num] += convert(time) - intime[car_num];
            intime.erase(car_num);
        }
    }
    
    for ( auto k : intime)
    {
        price[k.first] += 23*60+59 - k.second;
    }
    
    vector<int> answer;
    for (auto item : price)
    {
        if (item.second <= fees[0])
        {
            answer.push_back(fees[1]);
        }
        else
        {
            int temp = (item.second-fees[0]) / fees[2];
            if ((item.second-fees[0]) % fees[2] != 0)
            {
                temp+=1;
            }
            answer.push_back(fees[1] + temp*fees[3]);
        }
    }
    return answer;
}