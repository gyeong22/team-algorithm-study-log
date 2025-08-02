
t = int(input())

for case in range(1, t+1):
    n = int(input())
    lst = list(map(int, input().split()))
    mx = max(lst)
    diff_list = []

    for num in lst:
        diff_list.append(mx-num)

    one = 0
    two = 0 # 필요한 2의 수

    for num in diff_list:
        if num == 1:
            one += 1
            continue
        elif (num % 2) != 0:
            one += 1

        two += num // 2

    available_two = one - 1
    two_amount = 2 * (two - available_two)
    # two_amount = 필요한 - 이용 가능한 2의 수
    # 0으로 만들어야 함
    idx = 2 * one - 1
    if two_amount > 0: # 필요한 1의 수가 더 많다면
        
        if two_amount % 6 == 0:
            idx += 4 * (two_amount//6)

        elif (two_amount - 4) % 6 == 0:
            idx += 3 + 4 * ((two_amount - 4)//6)
        else:
            idx += 1 + 4 * ((two_amount - 2)//6)
    
    print(f'{case} {idx}')



