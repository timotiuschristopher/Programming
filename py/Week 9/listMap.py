# import random
import math

def printMap():
    for row in map:
        for value in row:
            print(value, end = " ")
        print()

def calcDistance(rowTo, colTo, rowGoal, colGoal):
    a = rowGoal - rowTo
    b = colGoal - colTo
    h = math.sqrt((a*a)+(b*b))
    return h

def calcStraightLine():
    for row in range(numOfRows): # Straight-line distance
        for col in range(numOfCols):
            if map[row][col] == 'A':
                x = row
                y = col
                print("A loc:", x, y)
            elif map[row][col] == 'B':
                u = row
                v = col
                print("B loc:", u, v)
                print(calcDistance(x, y, u, v))
                heu.append(calcDistance(x, y, u, v))
                
map = []
heu = []
starRow = 0
numOfRows = 9
numOfCols = 9
g = 1
for row in range(numOfRows): # Create map
    map.append([]) # Add an empty row
    for col in range(numOfCols):
        map[row].append(" ")
for col in range(numOfCols): # Create wall
    map[col][0] = "x"
    map[col][numOfCols-1] = "x"
    map[0][col] = "x"
    map[numOfCols-1][col] = "x"
# for w in range(2,numOfCols-2): # Create obstacle
#    map[4][w] = "w"
map[1][numOfCols//4] = "A"
map[numOfRows-2][(numOfCols//2)+1] = "B"
printMap()
calcStraightLine()
for i in range(2,numOfCols-2):
    map[1][i] = "#"
    map[1][i+1] = "A"
    g = g + 1
    calcStraightLine()
    if heu[i-1] > heu[i-2]:
        starRow = i
        print("Stop at 1",i)
        map[1][starRow+1] = "*"
        break
for j in range(2,numOfRows-2):
    if map[j+1][starRow] == "w":
        break
    else:
        map[j][starRow] = "#"
        map[j+1][starRow] = "A"
        g = g + 1
        calcStraightLine()
print(g)   
printMap()
