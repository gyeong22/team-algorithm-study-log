def dfs(x, y, origin_x, origin_y, dir_idx, cnt):
    global ans
    if cnt > 0 and y == origin_y and x == origin_x:
        if cnt > ans:
            ans = cnt
        return

    dx, dy = dir[dir_idx]
    nx = x + dx
    ny = y + dy
    if not (0 <= ny < n and 0 <= nx < n):
        return

    val = arr[ny][nx]
    if dessert[val]:
        return

    dessert[val] = 1

    if dir_idx < 3:
        dfs(nx, ny, origin_x, origin_y, dir_idx + 1, cnt + 1)

    dfs(nx, ny, origin_x, origin_y, dir_idx, cnt + 1)

    dessert[val] = 0

t = int(input())
for tc in range(1, t + 1):
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(n)]

    ans = -1
    dessert = [0] * 101
    dir = ((1,-1),(1,1),(-1,1),(-1,-1))
    for i in range(n-2):
        for j in range(1, n-1):
            dfs(i, j, i, j, 0, 0)

    print(f"#{tc} {ans}")