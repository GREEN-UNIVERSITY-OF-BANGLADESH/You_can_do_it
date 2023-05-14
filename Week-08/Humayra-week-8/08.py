for i in range(int(input())):
    n=int(input())
    rev=0
    tmp=n
    while n is not 0:
        d=n%10
        rev=rev*10+d
        n=n//10
    if tmp==rev : print('wins')
    else: print('loses')
    