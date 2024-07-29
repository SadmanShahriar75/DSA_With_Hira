#Find sum of all element in one array i.e [1,3,4,5,5,6,7] is given array, please now find sum of 1+2+3+4.... N

def sumAll():
    arr = [1,3,4,5,5,6,7]
    s = 0
    for i in arr:
        s = s + i
    return s

def sum_N(N):
    s = 0
    for i in range(1, N+1):
        s = s + i
    return s


# fun 1
total =  sumAll()
print("sum of all element", total)

#fun 2
total = sum_N(10)
print("sum of N series", total)


