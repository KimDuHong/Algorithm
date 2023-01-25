def rank(value):
    return 7-value if value>=2 else 6
      
def solution(lottos, win_nums):
    min_rank = 0
    for i in lottos:
        if i in win_nums:
            min_rank +=1
    return [rank(min_rank + lottos.count(0)), rank(min_rank)]