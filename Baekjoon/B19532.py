a, b, c, d, e, f = map(int, input().split())
end=0
x=0
y=0
for i in range(-999,1000):
    for j in range(-999,1000):
        if (a*i+b*j)==c and (d*i+e*j)==f:
            end=1
            x=i
            y=j
            print("%d %d"%(x,y))
            break
    if end==1:
        break