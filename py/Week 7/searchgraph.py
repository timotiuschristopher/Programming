import matplotlib.pyplot as plt
import numpy as np


n = np.linspace(1,100,100)
y1 = n                          #sequential search
y2 = np.log(n)                  #binary search


plt.plot(n,y1,label = 'Sequential search = O(n)')
plt.plot(n,y2,label = 'Binary search = O(log n)')

plt.xlabel("n")
plt.ylabel("Y")

plt.title("Sequential Search vs Binary Search")
plt.grid(True)
plt.legend()

plt.show()