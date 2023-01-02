#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    vector<string> check = phone_book;
    sort (phone_book.begin(), phone_book.end());
    for (int i = 0; i<phone_book.size()-1; i++)
    {
        string temp = phone_book[i];
        string tmp = phone_book[i+1];
            if (tmp.substr(0,temp.size())==temp)
            {
                return false;
            }
    }
    return answer;
}