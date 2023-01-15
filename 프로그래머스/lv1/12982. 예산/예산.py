def solution(d, budget):
    s = sum(d)
    d.sort()
    while(s>budget):
        s -= d.pop()
    return len(d)