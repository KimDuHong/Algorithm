def solution(name, yearning, photo):
    answer = [0] * len(photo)
    for idx,value in enumerate(photo):
        for k in name:
            if k in value:
                answer[idx]+=yearning[name.index(k)]
    return answer