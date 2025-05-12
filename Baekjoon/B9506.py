while True:
    n = int(input())
    if n == -1:
        break

    sum_div = 0
    ll = []

    for i in range(1, n):
        if n % i == 0:
            sum_div += i
            ll.append(i)

    if sum_div == n:
        print(f"{n} = {' + '.join(map(str, ll))}")
    else:
        print(f"{n} is NOT perfect.")
