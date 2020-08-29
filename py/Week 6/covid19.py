import matplotlib.pyplot as plt
import csv

x_indo=[]
y_indo=[]
x_india=[]
y_india=[]

#Indonesian COVID-19 patients
with open('Algorithm-semester-4\py\Week 6\indo.csv') as indofile:    #The file should be specified
    indo_reader = csv.DictReader(indofile)
    for row in indo_reader:                     #To fill the data by looping
        x_indo.append(str(row['date']))         #.append = to add data into the blank array
        y_indo.append(int(row['number']))

#Indian COVID-19 patients
with open('Algorithm-semester-4\py\Week 6\india.csv') as indiafile:
    india_reader = csv.DictReader(indiafile)
    for row in india_reader:                    #To fill the data by looping
        x_india.append(str(row['date']))        #date in string
        y_india.append(int(row['number']))      #data in integer

plt.plot(x_indo,y_indo, label='Indonesia')
plt.plot(x_india,y_india, label='India')

plt.xlabel("Date") 
plt.ylabel("Total COVID-19 Cases")

plt.title("Total COVID-19 Cases 2020 in Indonesia vs India ")
plt.grid(True)
plt.legend()

plt.show()
