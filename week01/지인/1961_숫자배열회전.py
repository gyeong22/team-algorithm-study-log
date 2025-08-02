
def rotate_90 (arr):
    n = len(arr)
    res = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            res[i][j] = arr[n-1-j][i]
    
    return res

t = int(input())

for case in range(1, t+1):
    n = int(input())
    input_arr = [list(map(int, input().split())) for _ in range(n)]

    arr_90 = rotate_90(input_arr)
    arr_180 = rotate_90(arr_90)
    arr_270 = rotate_90(arr_180)

    print(f'#{case}')
    for a, b, c in zip(arr_90, arr_180, arr_270):

        print("".join(map(str,a)), "".join(map(str,b)), "".join(map(str,c)))

