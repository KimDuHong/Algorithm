def solution(people, limit):
    answer = 0
    s = 0
    r= len(people)-1
    people = sorted(people)
    while(s<=r):
        if people[r] + people[s] <= limit:
            s+=1
        r-=1
        answer+=1
        
    return answer