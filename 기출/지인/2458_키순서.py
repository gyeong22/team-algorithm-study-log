from collections import deque
def height(st_node, lst):
    v = [0] * (n + 1)
    v[st_node[0]] = 1
    stack = deque(st_node)

    cnt = -1
    while stack:
        temp = stack.popleft()
        cnt += 1

        for num in lst[temp]:
            if not v[num]: # not in 연산은 시간 복잡도 최악.. 탐색에서는 지양
                v[num] = 1 # for문 안에서 바로 방문 처리
                stack.append(num)
    return cnt

n, m = map(int,input().split())
lst_upper = [[] for _ in range(n+1)] # 자신보다 큰 원소
lst_lower = [[] for _ in range(n+1)] # 자신보다 작은 원소
for _ in range(m):
    i, v = map(int,input().split())
    lst_upper[i].append(v)
    lst_lower[v].append(i)

total = 0
for i in range(1, n +1):
    temp = height([i], lst_lower) + height([i], lst_upper)
    if temp == n - 1:
        total += 1
print(total)

'''
[어려웠던 점]
1. 시간초과 발생
-stack.append 하는 시점에 visited에 방문처리하지 않았음
-동일 원소가 stack에 추가되는 걸 방지하기 위해 if not in ~ 조건을 걺
 => in 연산 속도는 que 길이에 좌우되는데, stack 안 node 개수가 많을 경우 쥐약
2. upper/ lower 리스트를 따로 만들 생각하지 못했음
-처음에 키가 작은 쪽은 별도의 함수를 만들어 비효율적으로 탐색했음

[한 마디]
bfs 개념을 정립할 수 있는 문제였음
'''