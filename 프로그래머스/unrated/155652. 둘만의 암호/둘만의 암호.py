def solution(s, skip, index):
    answer = ""
    alpha = [i for i in "abcdefghijklmnopqrstuvwxyz" if i not in skip]
    
    for i in s:
        change = alpha[(alpha.index(i) + index) % len(alpha)]
        answer += change
    
    return answer