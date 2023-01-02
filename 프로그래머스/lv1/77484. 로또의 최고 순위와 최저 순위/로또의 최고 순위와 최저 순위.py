def rank(value):
    if(value == 6):
        return 1
    elif value == 5:
        return 2
    elif value == 4:
        return 3
    elif value == 3:
        return 4
    elif value == 2:
        return 5
    else:
        return 6
def solution(lottos, win_nums):
    answer = []
    max_rank = 0
    min_rank = 0
    for i in lottos:
        if win_nums.count(i) != 0:
            min_rank +=1
    max_rank = min_rank + lottos.count(0)
    answer.append(rank(max_rank))
    answer.append(rank(min_rank))
    return answer