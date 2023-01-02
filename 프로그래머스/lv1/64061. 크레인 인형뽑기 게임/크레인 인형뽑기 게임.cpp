#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    for (int i = 0; i < moves.size(); i++){
        for ( int k = 0; k < board.size(); k++){
            if (board[k][moves[i]-1] == 0){
                continue;
            }else {
                basket.push_back(board[k][moves[i]-1]);
                board[k][moves[i]-1] = 0;
                if (basket.back() == basket[basket.size()-2])
               {
                   basket.pop_back();
                   basket.pop_back();
                   answer+=2;
                }
               break;
        }
    }
    }
    return answer;
}