for i in range(int(input())):
    n=int(input())
    li=list(input().split(' '))
    a=0
    b=0
    for k in li:
        if k=='LTIME108':
            a=a+1
        else: b=b+1
    print(f'{b} {a}')