def check():
    for c in range(W):
        cnt = 1
        is_possible = False
        for r in range(1, D):
            if data[r][c] == data[r-1][c]:
                cnt += 1    # 누적 1 증가
            else:           # 다르면
                cnt = 1     # 1로 초기화

            if cnt >= K:
                is_possible = True
                break
        else:
            return False
    return True



def search(row_idx, acc_count):
    global result   # 최소 약물 투여 횟수
    if acc_count >= result: return

    if row_idx == D:
        if check():
            result = min(result, acc_count)
        return

    search(row_idx+1, acc_count)

    origin_row = data[row_idx][:]

    data[row_idx] = [0] * W
    search(row_idx + 1, acc_count+1)

    data[row_idx] = [1] * W
    search(row_idx + 1, acc_count + 1)

    data[row_idx] = origin_row

T = int(input())
for tc in range(1, T+1):
    D, W, K = map(int, input().split())
    data = [list(map(int, input().split())) for _ in range(D)]

    result = K
    search(0, 0)

    print(f'#{tc} {result}')