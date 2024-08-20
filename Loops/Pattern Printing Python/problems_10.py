
def problemTen():
    k = 0
    for i in range(1,10):
        if i <= 5:
            k=k+1
        else:
            k=k-1
        for j in range(1,6):
            if j<=k:
                print("*", end="")
        print()
    return 

problemTen()