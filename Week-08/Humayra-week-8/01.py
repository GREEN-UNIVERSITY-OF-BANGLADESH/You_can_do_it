for i in range(int(input())):
    n=int(input())
    a=list(map(int, input().split(' ')))
    m=min(a)
    res=0
    for l in range(n):
        if m<a[l]:
            res=res+1
    print(res)