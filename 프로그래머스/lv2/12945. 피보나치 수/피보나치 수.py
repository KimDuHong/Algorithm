def solution(n):
    front,back=0,1
    for i in range(n):
        front,back = back,front+back
    return front % 1234567