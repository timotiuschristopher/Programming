# import random
import math

def printMap():                                     #To print map
    for row in map:
        for value in row:
            print(value, end = " ")
        print()

def calcDistance(rowTo, colTo, rowGoal, colGoal):   #To calculate distance (Heuristic)
    a = rowGoal - rowTo
    b = colGoal - colTo
    h = math.sqrt((a*a)+(b*b))
    return h

def calcStraightLine():                             # Straight-line distance
    for row in range(numOfRows):            
        for col in range(numOfCols):
            if map[row][col] == 'A':
                x = row
                y = col
                # print("A loc:", x, y)
            elif map[row][col] == 'B':
                u = row
                v = col
                # print("B loc:", u, v)
                calcDistance(x, y, u, v)

def turnRight(x,y):
    if map[x][y+1] == "w" or "x":
        return calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y+1] = "A"
        # print("Head right")
        return calcStraightLine()

def downWards(x,y):
    if map[x+1][y] == "w" or "x":
        return calcStraightLine()
    else:
        map[x][y] = "#"
        map[x+1][y] = "A"
        # print("Head down")
        return calcStraightLine()

def turnLeft(x,y):
    if map[x][y-1] == "w" or "x":
        return calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y-1] = "A"
        # print("Head left")
        return calcStraightLine()

def upWards(x,y):
    if map[x-1][y] == "w" or "x":
        return calcStraightLine()
    else:
        map[x][y] = "#"
        map[x-1][y] = "A"
        # print("Head up")
        return calcStraightLine()

def calcDirection(x,y):
    valRight = turnRight(x,y)
    valDown = downWards(x,y)
    valLeft = turnLeft(x,y)
    valUp = upWards(x,y)

    minDirection = min(valRight, valLeft, valDown, valUp)
    
    if minDirection == valRight:
        y = y+1
        map[x][y] = "A"
        printmap()

    if minDirection == valDown:
        x = x+1
        map[x][y] = "A"
        return result
    
    if minDirection == valLeft:
        y = y-1
        map[x][y] = "A"
        return result

    if minDirection == valUp:
        x = x-1
        map[x][y] = "A"
        return result
    
#Declare
map = []
heu = []
starRow = 0
numOfRows = 9
numOfCols = 9
g = 1                               
for row in range(numOfRows):        # Create map
    map.append([])                  # Add an empty row
    for col in range(numOfCols):
        map[row].append(" ")

for col in range(numOfCols):        # Create wall
    map[col][0] = "x"
    map[col][numOfCols-1] = "x"
    map[0][col] = "x"
    map[numOfCols-1][col] = "x"

for w in range(2,numOfCols-2):      # Create obstacle
    map[4][w] = "w"

#Starting position
startRow = 1
startCol = numOfCols//4
map[startRow][startCol] = "A"
map[numOfRows-2][(numOfCols//2)+1] = "B"
printMap()

#Moving








"""
1. Determine the coordinate
2. Calculate all 4 directions (up, down, right, left) = heuristic
3. Comparing all 4 heuristic
4. go to the smallest heuristic
"""



printMap()