from collections import deque
def solution(maps):
    def bfs(y,x):
        dx = [0,1,0,-1]
        dy = [1,0,-1,0]
        q = deque()
        q.append((y, x, 1))
        while q:
            y, x, d = q.popleft()
            if y == len(maps)-1 and x == len(maps[0])-1:
                return d

            if maps[y][x] == 0:
                continue
            maps[y][x] = 0 # visited

            for i in range(4):
                now_y = y + dy[i]
                now_x = x + dx[i]
                if 0<=now_x<len(maps[0]) and 0<=now_y<len(maps):
                    q.append((now_y,now_x,d+1))
        return -1
    return bfs(0,0)