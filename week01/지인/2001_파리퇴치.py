# import sys
# input = sys.stdin.readline

t = int(input())

for case in range(1,t+1):
    n, m = map(int,input().split())
    n_list = [list(map(int,input().split())) for _ in range(n)]

    pre_matrix = [[0 for _ in range(n)] for _ in range(n)]
    pre_matrix[0][0] = n_list[0][0]

    # row 0 and col 0 cumulative sum
    for i in range(1,n):
        pre_matrix[0][i] = pre_matrix[0][i-1] + n_list[0][i]
        pre_matrix[i][0] = pre_matrix[i-1][0] + n_list[i][0]

    for i in range(1,n):
        for j in range(1, n):
            pre_matrix[i][j] = pre_matrix[i-1][j] + pre_matrix[i][j-1] -pre_matrix[i-1][j-1] + n_list[i][j]

    max_sum = pre_matrix[m-1][m-1]
    for i in range(m,n):
        max_sum = max(max_sum, pre_matrix[m-1][i] - pre_matrix[m-1][i - m])
        max_sum = max(max_sum, pre_matrix[i][m-1] - pre_matrix[i - m][m-1])

    for i in range(m,n):
        for j in range(m,n):
            max_sum = max(max_sum, pre_matrix[i][j] - pre_matrix[i-m][j] - pre_matrix[i][j-m] + pre_matrix[i-m][j-m])

    print(f'#{case} {max_sum}')


