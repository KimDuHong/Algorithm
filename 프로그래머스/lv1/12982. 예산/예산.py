def solution(d, budget):
    sums = 0
    count = 0
    d.sort()
    for i in d:
        sums += i
        if sums <= budget:
            count += 1
        else:
            break
    return count