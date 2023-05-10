def solution(n, m, section):
    answer = 0
    color = {i:False for i in range(1,n+m)}
    for i in section:
        color[i] = True
    for key,value in color.items():
        if color[key]:
            answer+=1
            for i in range(m):
                color[key+i] = False
    return answer