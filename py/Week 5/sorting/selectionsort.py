def selectionSort(data):

    for i in range(0,len(data)-1):
        minval = i   
        for k in range(i,len(data)):
            if data[k]<data[minval]:
                minval = k             

        temp = data[minval]
        data[minval] = data[i]
        data[i] = temp
        
        print(i,data)    

data = [7,3,2,1,9,5]
selectionSort (data)