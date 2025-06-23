n=int(input())
l=[]
sum=0
for _ in range(n):
    a=int(input())
    if a!=0:
        l.append(a)
    else:
        l.pop()
    
for i in l:
    sum+=i
print(sum)
