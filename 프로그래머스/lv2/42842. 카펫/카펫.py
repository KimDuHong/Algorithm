def solution(brown, yellow):
    answer = []
    area = brown+yellow
    curX,curY = area,1

    while(1):
        if not area / curX:
            continue
        if curY <=2:
           count_brown = area 
        else:
           curX = area / curY
           count_brown = curX *2 + (curY-2)*2
        if(count_brown == brown):
            break
        curY+=1
    answer.append(curX)
    answer.append(curY)
    return answer
