#10101
a = int(input())
b = int(input())
c = int(input())

# 각의 합 체크
if a + b + c != 180:
    print("Error")
else:
    if a == 60 and b == 60 and c == 60:
        print("Equilateral")
    elif a == b or b == c or a == c:
        print("Isosceles")
    else:
        print("Scalene")
