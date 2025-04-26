def alphatonum(score):
    if score == 'A+':
        return 4.5
    elif score == 'A0':
        return 4.0
    elif score == 'B+':
        return 3.5
    elif score == 'B0':
        return 3.0
    elif score == 'C+':
        return 2.5
    elif score == 'C0':
        return 2.0
    elif score == 'D+':
        return 1.5
    elif score == 'D0':
        return 1.0
    elif score == 'F':
        return 0.0
    elif score == 'P':
        return -1

sum = 0
total_credit = 0

for i in range(20):
    sub, credit, score = input().split()
    credit = float(credit)
    num_score = alphatonum(score)
    
    if num_score == -1:
        continue

    sum += num_score * credit
    total_credit += credit

print(sum / total_credit)
