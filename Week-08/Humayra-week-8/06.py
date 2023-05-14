for i in range(int(input())):
    l , r = map(int, input().split(' '))
    s=[2,3,9]
    cnt=0
    for a in range(l,r+1):
        if a%10 in s: cnt+=1
    print(cnt)
    