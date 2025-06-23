#5622 브론즈2
word = input()  # 문자열 입력 받기
time = 0        # 총 시간 변수

for char in word:
    if char in 'ABC':
        time += 3
    elif char in 'DEF':
        time += 4
    elif char in 'GHI':
        time += 5
    elif char in 'JKL':
        time += 6
    elif char in 'MNO':
        time += 7
    elif char in 'PQRS':
        time += 8
    elif char in 'TUV':
        time += 9
    elif char in 'WXYZ':
        time += 10

print(time)
