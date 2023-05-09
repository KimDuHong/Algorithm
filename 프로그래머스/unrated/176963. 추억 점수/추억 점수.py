def solution(name, yearning, photo):
    answer = [0] * len(photo)
    value_dict = dict(zip(name,yearning))
    for idx,value in enumerate(photo):
        for k in name:
            if k in value:
                answer[idx]+=value_dict[k]
    return answer