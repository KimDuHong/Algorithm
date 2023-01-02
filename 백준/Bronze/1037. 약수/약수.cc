#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> list;
    int count = 0;
    cin >>count;
    for (int i = 0; i < count; i++)
    {
        int a = 0;
        cin >> a;
        if(count ==1)
    {
        cout << a*a;
        return 0;
    }
        list.push_back(a);
    }    
    int min = *min_element(list.begin(), list.end());
    int max = *max_element(list.begin(), list.end());
    cout << min * max;
}