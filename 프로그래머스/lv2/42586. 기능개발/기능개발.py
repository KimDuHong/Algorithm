def solution(progresses, speeds):
    answer = []
    left = []
    queue = []
    for i in range(len(progresses)):
        tmp = 100-progresses[i]
        if tmp % speeds[i] == 0:
            tmp/=speeds[i]
        else:
            tmp = tmp // speeds[i] +1
            
        left.append(tmp)
        
    for i in left:
        if not queue:
            queue.append(i)
        elif queue[0] >= i:
            queue.append(i)
        elif queue[0] < i:
            answer.append(len(queue))
            queue = []
            queue.append(i)

    if queue:
        answer.append(len(queue))
        
    return answer