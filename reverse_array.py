arr = [1,2,3,4,5]

def rev_arr(l, r, array):
    if l >= r:
        return
    else:
        arr[l], arr[r] = arr[r], arr[l]

def rev_arr_i(i):
    if i >= len(arr)//2:
        return
    else:
        arr[i], arr[len(arr)-i-1] = arr[len(arr)-i-1], arr[i]


rev_arr(0, len(arr)-1, arr)
print(arr)
rev_arr_i(0)
print(arr)