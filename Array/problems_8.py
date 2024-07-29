
def maxofArray():
    arr = [12,34,5,0]
    max_element = arr[0]
    for i in range(len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]

    return max_element

print(maxofArray())