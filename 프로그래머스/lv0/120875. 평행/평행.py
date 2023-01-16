def solution(dots):
    answer = 0
    tmp = []
    for i in range(len(dots)):
        for k in range(i+1,len(dots)):
            tmp.append(abs((dots[i][0] - dots[k][0]) / (dots[i][1]-dots[k][1])))
    return 1 if len(tmp) - len(set(tmp)) else 0
