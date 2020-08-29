target = eval(input("Enter the target value: "))
data = [1,2,3,4,5,6,7,8,9,10]
end = len(data)
start = 0
middle = round(((end-start)-1)/2)     
temp = data[middle]
print(temp)

for i in range(0,middle):
    if target > temp:
        start = middle 
        result = round((end-start)/2)
        middle = middle + result
        temp = data[middle]
        print(temp)
    elif target < temp:
        end = middle 
        result = round((end-start)/2)
        middle = start + result
        temp = data[middle]
        print(temp)
if target == temp:
    print("Target Found")



