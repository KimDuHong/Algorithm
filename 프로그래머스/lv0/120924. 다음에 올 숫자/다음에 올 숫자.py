def solution(common):
    # if 배열 첫번째 더하기 두번째는 세번째면 : 마지막 더하기(두번째 - 첫번째)
    # if 배열 세번째 나누기 두번째는 배열 첫번째면 : 배열 세번째 곱하기 첫번째
    answer=0
    if common[2]-common[1]==common[1]-common[0]:
        answer = common[-1]+common[1]-common[0]
        return answer 
    else:

        answer=common[-1]*common[1]/common[0]
        return answer