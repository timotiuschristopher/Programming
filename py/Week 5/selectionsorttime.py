# Selection Sort, only in sequence starting from 1
import time
start_time = time.time()
data = [10, 2, 3, 5, 7, 1, 8, 9, 4, 6]
print("x", data)
for i in range(0, len(data)-1):
    for j in range(i, len(data)):
        if data[j] == i+1:
            buffer = data[i]
            data[i] = data[j]
            data[j] = buffer
            print(i+1, data)
        time.sleep(1)
print("--- %.4s seconds ---" % (time.time() - start_time))