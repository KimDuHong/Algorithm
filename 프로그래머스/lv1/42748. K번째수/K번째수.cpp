#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> result;
    for (int i =0; i< commands.size(); i++){
         for (int j = commands[i][0]-1; j <= commands[i][1]-1; j++)
         {
            result.push_back(array[j]);
          }
        sort(result.begin(),result.end());
        answer.push_back(result[commands[i][2]-1]);
        result.clear();
}
    return answer;
}