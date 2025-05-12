n,k=map(int,input().split())
num=0
ans=0
for i in range(1,n+1):
    if n%i==0:
        num+=1
    if num==k:
        ans=i
        break

if num==k:
    print(i)
else:
    print(0)