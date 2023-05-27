def solution(cards1,cards2,goal):
    while goal:
        word=goal[0]
        if cards1 and cards1[0]==word:
            cards1=cards1[1:]
        elif cards2 and cards2[0]==word:
            cards2=cards2[1:]
        else:
            return "No"
        goal=goal[1:]
    return "Yes"
    
