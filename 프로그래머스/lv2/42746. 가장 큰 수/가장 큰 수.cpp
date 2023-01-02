#include <string>
#include <vector>
#include <algorithm>


using namespace std;
bool cmp (string a, string b)
{
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    long long sum = 0;
    for (int z = 0; z<numbers.size(); z++)
    {
        sum+=numbers[z];
    }
    if (sum>0){
    string answer;
    vector<string> string_numbers;
    for (int i =0; i < numbers.size(); i++)
    {
        string_numbers.push_back(to_string(numbers[i]));
    }
    sort(string_numbers.begin(), string_numbers.end(), cmp);

    for ( int i = 0; i < string_numbers.size(); i++)
    {
        answer+=string_numbers[i];
    }
    
    return answer;
    }
    else return "0";
}