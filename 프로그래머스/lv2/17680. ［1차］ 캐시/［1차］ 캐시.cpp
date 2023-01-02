#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> cache;
    for (int i = 0; i < cities.size(); i++)
    {
        string city = cities[i];
        for (int k = 0; k < city.size(); k++)
        {
            city[k] = tolower(city[k]);
        }
        
        bool hit = false;
        int idx = 0;
        for (idx; idx < cache.size(); idx++)
        {
            if (cache[idx] == city)
            {
                hit = true;
                break;
            }
        }
        cache.push_back(city);
        
        if (hit)
        {
            cache.erase(cache.begin() + idx);
            answer ++;
        }
        else
        {
            answer+=5;
            if (cache.size() > cacheSize)
            {
                cache.pop_front();
            }
        }
    }
    return answer;
}