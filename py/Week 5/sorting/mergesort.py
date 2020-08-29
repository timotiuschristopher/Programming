def mergeSort(data):
    print("dividing", data)
    start = 0
    end = len(data)
    if  end > 1:                                  #base case
        mid = (start+end)//2                      #the opposite is // floor division, division result rounded down
        left = data[start:mid]                    #[starting index:final index]
        right = data[mid:end]
        mergeSort(left)                           #Recursive Function
        mergeSort(right)
        i=j=k=0
        while i<len(left) and j<len(right):       
            if left[i]<right[j]:                  #merging and comparing
                data[k] = left[i]
                i=i+1
            else:
                data[k] = right[j]
                j=j+1
            k=k+1
        while i<len(left):                         #to check left out value
            data[k] = left[i]
            i=i+1
            k=k+1
        while j<len(right):                         
            data[k] = right[j]
            j=j+1
            k=k+1
    print("merging",data)       
data = [7,3,2,1,9,5,4]
mergeSort(data)
print("sorted data", data)

