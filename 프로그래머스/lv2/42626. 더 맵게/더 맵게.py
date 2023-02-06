from collections import deque
import heapq
def solution(scoville, k):
    heap = []
    for num in scoville:
        heapq.heappush(heap, num)
    cnt =0
    while heap[0] < k:
        if len(heap) >=2:
             heapq.heappush(heap, heapq.heappop(heap) + (heapq.heappop(heap) * 2))
        else:
            return -1
        cnt += 1
    return cnt