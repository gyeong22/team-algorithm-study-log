def dfs(x, y, chance = True, cnt = 1):
    global mx
    if cnt > mx:
        mx = max(mx, cnt)
    for dx, dy in dir:
        nx = x + dx
        ny = y + dy

        if 0 <= nx < n and 0 <= ny < n and not v[nx][ny]:
            if arr[x][y] > arr[nx][ny]: #더 낮은 길이라면
                cnt += 1
                v[nx][ny] = 1
                dfs(nx, ny, chance, cnt)
                v[nx][ny] = 0
                cnt -= 1
            elif chance and arr[nx][ny] - k < arr[x][y]:
                origin = arr[nx][ny]
                arr[nx][ny] = arr[x][y] - 1 # 값 변경
                cnt += 1
                v[nx][ny] = 1
                chance = False
                dfs(nx, ny, chance, cnt)
                v[nx][ny] = 0
                arr[nx][ny] = origin
                chance = True
                cnt -= 1


dir = ((-1,0),(1,0),(0,-1),(0,1))
t = int(input())
for tc in range(1, t + 1):
    n, k = map(int, input().split())
    arr = [list(map(int, input().split())) for _ in range(n)]

    max_val = max(map(max,arr))
    mx = -1
    for i in range(n):
        for j in range(n):
            if arr[i][j] == max_val:
                v = [[0] * n for _ in range(n)]
                v[i][j] = 1
                dfs(i, j)
    print(f'#{tc} {mx}')