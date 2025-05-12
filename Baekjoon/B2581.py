n=int(input())
m=int(input())
ll=[]
for i in range(n,m+1):
    if i == 1:
        continue
    is_prime = True

    for j in range(2,i):
        if i%j==0:
            is_prime=False
    
    if is_prime:
        ll.append(i)

sum=0
for l in ll:
    sum+=l

if len(ll)==0:
    print("-1")
else:
    print(sum)
    print(ll[0])