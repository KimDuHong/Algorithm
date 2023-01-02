#include <string>
#include <vector>

using namespace std;

int z_count = 0;
int count = 0;

string to_binary(int num) {
	string s = "";
	while (num > 0) {
		if (num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num >>= 1;
	}
	return s;
}
void convert(string s)
{
    if (s == "1")
    {
        return;
    }
    int tmp = 0;
    string change_string = "";
    for (auto i : s)
    {
       if (i == '0')
       {
           z_count++;
           tmp++;
       }
    }
    int erase_0 = s.size() - tmp;
    change_string = to_binary(erase_0);
    count++;
    convert(change_string);
}
vector<int> solution(string s) {
    convert(s);
    vector<int> answer;
    answer.push_back(count);
    answer.push_back(z_count);
    return answer;
}