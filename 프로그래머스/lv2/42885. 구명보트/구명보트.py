def solution(people, limit):
    answer,s,r = 0,0,len(people)-1
    people.sort()
    while(s<=r):
        if people[r] + people[s] <= limit:
            s+=1
        r-=1
        answer+=1
    return answer