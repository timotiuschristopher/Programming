target = eval(input("Enter the target value: "))
nlist = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
end = len(nlist)
start = 0
mid = round(((end-start)-1)/2)
temp = nlist[mid]
print(temp)
#for i in range(0,8,1):
x = 0
while x != 1:
    if target == temp:
        print("Yey!")
        x = 1
    elif target > temp:
        start = mid
        mid3 = round(((end-start))/2)
        mid = mid + mid3
        temp = nlist[mid]
        print(temp)
    elif target < temp:
        end = mid
        mid2 = round(((end-start))/2)
        mid = start + mid2
        temp = nlist[mid]
        print(temp)
