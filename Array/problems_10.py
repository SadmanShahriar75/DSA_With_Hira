# Find sum from 0 to N [use for loop or any formulae]

def sum_N(N):
    s = 0
    for i in range(0, N+1):
        s = s + i
    return s

print(sum_N(10))

