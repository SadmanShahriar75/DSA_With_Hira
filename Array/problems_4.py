
def exitsArray():
    arr = [12, 35, 56, 7]
    search_item = 35

    found = False
    for i in range(len(arr)):
        if arr[i] == search_item:
            found = True
            break

    if found:
        print("Finded")
    else:
        print("Not Finded")

exitsArray()
