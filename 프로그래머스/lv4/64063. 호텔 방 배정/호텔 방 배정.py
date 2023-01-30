from collections import defaultdict
import sys
sys.setrecursionlimit(10000000)
m = defaultdict(int)

def find_room(n):
    if m[n] ==0:
        return n
    else:
        m[n] = find_room(m[n])
        return m[n]
def solution(k, room_number):
    answer = []
    for i in room_number:
        n = find_room(i)
        answer.append(n)
        m[n] = n+1
    return answer