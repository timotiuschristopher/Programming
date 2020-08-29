import csv

with open('Algorithm-semester-4\py\Week 6\indo.csv', newline='') as indofile:
    reader = csv.DictReader(indofile)
    for row in reader:
        print(row['date'], row['number'])
