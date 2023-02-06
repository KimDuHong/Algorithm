import heapq
def solution(scoville, k):
    cnt =0
    scoville.sort()
    while scoville[0] < k:
        if len(scoville) >=2:
             heapq.heappush(scoville, heapq.heappop(scoville) + (heapq.heappop(scoville) * 2))
        else:
            return -1
        cnt += 1
    return cnt