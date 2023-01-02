#include <string>
#include <vector>
#include <stack>


using namespace std;

bool check(string str)
{
   stack<char> q;
	q.push(str[0]);
	for (int i = 1; i < str.size(); i++)
	{
		if (!q.empty())
		{
			if (q.top() == '(' && str[i] == ')')
				q.pop();
			else if (q.top() == '[' && str[i] == ']')
				q.pop();
			else if (q.top() == '{' && str[i] == '}')
				q.pop();

			else
				q.push(str[i]);
		}
		else
			q.push(str[i]);
	}
	if (q.size() == 0)
		return true;
	else
		return false;
}
int solution(string s) {
    int answer = 0;
    string tmp = s;
        
    for (int i = 0; i < s.size(); i++)
    {
        for (int k = 1; k < s.size(); k++)
        {
            tmp[k-1] = tmp[k];
        }
        tmp[s.size()-1] = s[i];
        if (check(tmp))
        {
            answer++;
        }
    }
    
    return answer;
}