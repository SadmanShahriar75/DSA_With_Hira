
def minofArray():
    arr = [12,34,5,6]
    min_element = arr[0]
    for i in range(len(arr)):
        if arr[i] < min_element:
            min_element = arr[i]

    return min_element

print(minofArray())
