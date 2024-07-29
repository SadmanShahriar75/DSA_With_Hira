# Find Only even sum, means if you are given [1,3,4,5,5,6,7] this array, please find sum of even numbers 1+3+5.... Nth even

def evenSum():
    arr = [1,3,4,5,5,6,7]
    s = 0
    for i in arr:
        if i % 2 == 0:
            s = s + i
    return s

def evenSum_N(N):
    s = 0
    for i in range(1,N+1):
        if i % 2 == 0:
            s = s + i
    return s


#fun 1 
total = evenSum()
print("even sum is ", total)

#fun 2
total = evenSum_N(12)
print("even sum of N is ", total)