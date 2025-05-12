n = int(input())
ll = list(map(int, input().split()))

answer = 0

for i in ll:
    if i == 1:
        continue

    is_prime = True
    for j in range(2, i):
        if i % j == 0:
            is_prime = False
            break

    if is_prime:
        answer += 1

print(answer)
