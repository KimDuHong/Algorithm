def solution(storey):
    answer = 0
    round_stroey = 0
    while storey:
        if storey%10 == 5:
            if storey%10 ==5 and storey//10 >5:
                round_stroey = round(storey,-1)
            else:
                round_stroey = round(storey-1,-1)
        else:
            round_stroey = round(storey,-1)
        answer+=abs(round_stroey-storey)
        storey = round_stroey//10
    return answer
    
