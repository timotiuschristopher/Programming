def insertionSort(data):
    for i in range(0,len(data)+1):
        for j in range(0,i):
            for k in range(j):
                if data[j]<data[k]:
                    temp = data[j]
                    data[j] = data[k]
                    data[k] = temp
        print(i,data)

data = [7,3,2,1,9,5]
insertionSort (data)


                 
        
    
