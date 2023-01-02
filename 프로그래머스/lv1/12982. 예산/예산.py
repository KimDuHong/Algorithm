def solution(d, budget):
    sum = 0
    for i in d:
        sum+=i
    
    while(1):
        if(sum <= budget):
            break
        else:
            sum-=max(d)
            d.remove(max(d))
    return len(d)