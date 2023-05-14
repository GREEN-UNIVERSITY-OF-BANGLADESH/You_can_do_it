p1=0
p2=0
a,b = 0, 0
for i in range(int(input())):
    s1, s2 = map(int, input().split(' '))
    a+=s1
    b+=s2
    if a>b:
        p1=max(p1,(a-b))
        
    else:
        p2=max(p2,(b-a))
        
if(p1>p2): print(f'1 {p1}')
else: print(f'2 {p2}')