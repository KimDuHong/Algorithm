#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> input;
    vector<int> min;
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        input.push_back(a);
    }
    sort(input.begin(), input.end());
    
    for (auto inp : input)
    {
    int i = 1;
    int min_x = 0;
    int count = 0;
    while(count < 2)
    {
        count = 0;
        min_x = inp * i;
        for (int i = 0; i < input.size(); i++)\
        {
            if(input[i] == inp) continue;
            if(min_x % input[i] == 0)
            {
                count++;
            }
        }
        i++;
    }
        min.push_back(min_x);
    }
    int answer = *min_element(min.begin(), min.end());
    cout << answer;
}