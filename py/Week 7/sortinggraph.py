import matplotlib.pyplot as plt
import numpy as np
import math


n = np.linspace(1,100,100)
y1 = n*n                            #Bubble Sort
y2 = n*(np.log(n))                  #Merge Sort

 
plt.plot(n,y1,label = r'Bubble, selection, Insertion Sort = $O(n^2)$')
plt.plot(n,y2,label = r'Merge Sort = $O(n log n)$')

plt.xlabel("n")
plt.ylabel("Y")

plt.xscale('log')               #logarithmic scale at x-axis
plt.xlim(1,100)                 #to limit x-axis
plt.ylim(0,500)

plt.title("The Big O of Sorting Algorithm")
plt.grid(True)
plt.legend()

plt.show()