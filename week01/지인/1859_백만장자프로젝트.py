t = int(input())

for case in range(1,t+1):
    
    n = int(input())
    n_list = list(map(int,input().split()))

    temp_max = 0
    revenue = 0
    
    for num in n_list[::-1]:
        if num >= temp_max:
            temp_max = num
        else:
            revenue += temp_max - num

    print(f'#{case} {revenue}')
