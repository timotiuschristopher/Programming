import matplotlib.pyplot as plt
import numpy as np

n = np.linspace(1,100,100)
y1 = n                              #Sequential search
y2 = np.log(n)                      #Binary search
y3 = n*n                            #Bubble Sort
y4 = n*(np.log(n))                  #Merge Sort

plt.subplot(2,1,1)
plt.plot(n,y1,label = 'Sequential search = $O(n)$')
plt.plot(n,y2,label = 'Binary search = $O(log n)$')
plt.xlabel("n")
plt.ylabel("Y")
plt.title("Sequential Search vs Binary Search")
plt.grid(True)
plt.legend()

plt.subplot(2,1,2)
plt.plot(n,y3,label = r'Bubble, selection, Insertion Sort = $O(n^2)$')
plt.plot(n,y4,label = r'Merge Sort = $O(n log n)$')
plt.xlabel("n")
plt.ylabel("Y")
plt.xscale('log')               #logarithmic scale at x-axis
plt.xlim(1,100)                 #to limit x-axis
plt.ylim(0,500)
plt.title("The Big O of Sorting Algorithm")
plt.grid(True)
plt.legend(loc='upper left', shadow=True, fontsize='medium')
plt.subplots_adjust(hspace=0.4, wspace=0.4)

plt.show()


#loc='upper left', shadow=True, fontsize='medium'