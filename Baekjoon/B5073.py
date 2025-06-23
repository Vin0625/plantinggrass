while True:
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break

    ll = sorted([a, b, c])  # 정렬해서 가장 긴 변이 맨 뒤로 오게 함

    # 삼각형의 조건 검사
    if ll[2] >= ll[0] + ll[1]:
        print("Invalid")
    else:
        if a == b == c:
            print("Equilateral")
        elif a == b or b == c or a == c:
            print("Isosceles")
        else:
            print("Scalene")
