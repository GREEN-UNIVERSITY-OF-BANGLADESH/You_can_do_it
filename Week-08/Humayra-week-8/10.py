for i in range(int(input())):
    s=''
    n=int(input())
    for j in range(n):
        if(n%2==0):
            if j == (n//2-1) or j == n//2:
                s+='1'
            else: s+='0'
        else:   
            if(j==n//2): s+='1'
            else: s+='0'
    
    print(s)        