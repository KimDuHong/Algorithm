def solution(k, dungeons):
    from itertools import permutations
    answer = 0
    for i in range(len(dungeons),0,-1):
        tmp = list(permutations(dungeons,i)) # i 개 짜리 배열
        for j in tmp: # 하나의 경우
            flag = True
            temp_k = k
            for m in j:
                if m[0] <= temp_k:
                    temp_k -=m[1]
                else:
                    flag = False
                    break
            if flag:
                return i
    return answer