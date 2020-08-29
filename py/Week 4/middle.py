def midValue(start,end):
    middle = round(((end-start)-1)/2)
    return middle
    
target = eval(input("Enter the target value: "))
nlist = [1,2,3,4,5,6,7]
end = len(nlist)
start = 0
mid = midValue(start, end)
temp = nlist[mid]
print(temp)

for i in range(0,4,1):
    if target == temp:
        print("Yey!")
        break
    elif target > temp:
        start = mid
        mid = mid + midValue(start, end)
        temp = nlist[mid]
        print(temp)
        end = mid
    elif target < temp:
        end = mid
        mid2 = round(((end-start))/2)
        mid = start + mid2
        temp = nlist[mid]
        print(temp)
