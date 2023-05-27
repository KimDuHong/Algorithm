def solution(cards1, cards2, goal):
    for word in goal:
        if cards1 and cards1[0] == word:
            cards1 = cards1[1:]
        elif cards2 and cards2[0] == word:
            cards2 = cards2[1:]
        else:
            return "No"
    return "Yes"