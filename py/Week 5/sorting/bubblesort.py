def bubbleSort(nlist):
    for passnum in range(len(nlist)-1,0,-1):
        for i in range(passnum):
            if nlist[i]>nlist[i+1]:
                temp = nlist[i]
                nlist[i] = nlist[i+1]
                nlist[i+1] = temp
            print(nlist)

nlist = [7, 5, 2, 1, 3]
bubbleSort(nlist)
print(nlist)

