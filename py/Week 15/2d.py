"""
2D arrays
"""
T = [[11, 12, 5, 2], [15,6,10], [10, 8, 12, 5], [12,15,8,6]]
for r in T:
    for c in r:
        print(c,end = " ")
    print()

print(T[0])
print(T[1][2])

#Insert
#updating

# # T.reverse()
# 



"""
Inserting empty array
map =[]
for row in range(4): # Create map
    map.append([]) # Add an empty row
    for col in range(4):
        map[row].append(" ")

for row in range(0,4):
    for col in range(0,4):
        map[row][col] = [1,2,3,4]
    
for row in map:
    for value in row:
        print(value, end = " ")
    print()
"""