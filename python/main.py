arr = [1,2,9,1,15]
n = len(arr)
lp = 0
rp = n-1

while lp < rp:
    if arr[lp] > arr[rp]:
        temp = arr[lp]
        arr[lp] = arr[rp]
        arr[rp] = temp

    if arr[lp] > arr[rp]:
        lp+=1
    else: 
        rp-=1

for val in arr:
    print(val, end=" ")


