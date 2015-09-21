import math

def sum_digit(n):
    count = 0
    while n >= 1:
        count += n % 10
        n = int(n/ 10)
    return count

print(sum_digit(math.pow(2, 1000)))
