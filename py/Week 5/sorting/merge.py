# def mergeSort(arr): 
#     if len(arr) >1: 
#         mid = len(arr)//2 #Finding the mid of the array 
#         L = arr[:mid] # Dividing the array elements  
#         R = arr[mid:] # into 2 halves 
  
#         mergeSort(L) # Sorting the first half 
#         mergeSort(R) # Sorting the second half 
  
#         i = j = k = 0
          
#         # Copy data to temp arrays L[] and R[] 
#         while i < len(L) and j < len(R): 
#             if L[i] < R[j]: 
#                 arr[k] = L[i] 
#                 i+=1
#             else: 
#                 arr[k] = R[j] 
#                 j+=1
#             k+=1
          
#         # Checking if any element was left 
#         while i < len(L): 
#             arr[k] = L[i] 
#             i+=1
#             k+=1
          
#         while j < len(R): 
#             arr[k] = R[j] 
#             j+=1
#             k+=1
  
# # Code to print the list 
# def printList(arr): 
#     for i in range(len(arr)):         
#         print(arr[i],end=" ") 
#     print() 
  
# # driver code to test the above code 
# if __name__ == '__main__': 
#     arr = [12, 11, 13, 5, 6, 7]  
#     print ("Given array is", end="\n")  
#     printList(arr) 
#     mergeSort(arr) 
#     print("Sorted array is: ", end="\n") 
#     printList(arr) 

#####################################################################

def mergeSort(myList):
    if len(myList) > 1:
        mid = len(myList) // 2
        left = myList[:mid]
        right = myList[mid:]

        # Recursive call on each half
        mergeSort(left)
        mergeSort(right)

        # Two iterators for traversing the two halves
        i = 0
        j = 0
        
        # Iterator for the main list
        k = 0
        
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
              # The value from the left half has been used
              myList[k] = left[i]
              # Move the iterator forward
              i += 1
              print(myList)
            else:
                myList[k] = right[j]
                j += 1
            # Move to the next slot
            
            k += 1

        # For all the remaining values
        while i < len(left):
            myList[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            myList[k]=right[j]
            j += 1
            k += 1

myList = [54,26,93,17,77,31,44,55,20]
mergeSort(myList)
# print(myList)