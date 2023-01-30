from collections import defaultdict
import sys
sys.setrecursionlimit(100000)

def solution(k, room_number):
    answer = []
    m = defaultdict(int)
    def find_room(n):
        if m[n] ==0:
            return n
        else:
            m[n] = find_room(m[n])
        return m[n]
    
    for i in room_number:
        n = find_room(i)
        answer.append(n)
        m[n] = n+1
    return answer