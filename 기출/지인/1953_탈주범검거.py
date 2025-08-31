from collections import deque

def bfs(si, sj, cnt=1):
    q = deque([(si, sj, 1)])
    while q:
        x, y, pre = q.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and not v[nx][ny] and arr[nx][ny] != 0:
                if comb[arr[x][y]][i] == 1 and comb[arr[nx][ny]][(i + 2) % 4] == 1 and pre + 1 <= time:
                    q.append((nx, ny, pre + 1))
                    v[nx][ny] = True
                    cnt += 1
    return cnt

dx = (-1, 0, 1, 0) # 상 좌 하 우
dy = (0, -1, 0, 1)

comb = (
    (),
    (1, 1, 1, 1),
    (1, 0, 1, 0),
    (0, 1, 0, 1),
    (1, 0, 0, 1),
    (0, 0, 1, 1),
    (0, 1, 1, 0),
    (1, 1, 0, 0))

t = int(input())
for tc in range(1, t + 1):
    n, m, r, c, time = map(int, input().split())
    arr = [list(map(int, input().split())) for _ in range(n)]

    v = [[False] * m for _ in range(n)]
    v[r][c] = True

    print(f'#{tc} {bfs(r, c)}')