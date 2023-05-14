for i in range(int(input())):
    n, k= map(int, input().split(' '))
    a=list(map(int, input().split(' ')))
    cnt=0
    for m in a:
        if(m>k): cnt+=1
    print(cnt)