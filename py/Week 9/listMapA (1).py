#import random
import math

def printMap():                                     #to print map
    for row in map:
        for value in row:
            print(value, end = " ")
        print()

def calcDistance(rowTo, colTo, rowGoal, colGoal):   #to calculate distance
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
                print("A loc:", x, y)
            elif map[row][col] == 'B':
                u = row
                v = col
                print("B loc:", u, v)
                print(calcDistance(x, y, u, v))
                heu.append(calcDistance(x, y, u, v))

def turnRight(x,y):
    if map[x][y+1] == "w":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y+1] = "A"
        print("Head right")
        calcStraightLine()

def turnLeft(x,y):
    if map[x][y-1] == "w":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y-1] = "A"
        print("Head left")
        calcStraightLine()

def downWards(x,y):
    if map[x+1][y] == "w":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x+1][y] = "A"
        print("Head down")
        calcStraightLine()

def upWards(x,y):
    if map[x-1][y] == "w":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x-1][y] = "A"
        print("Head up")
        calcStraightLine()

#Declare
map = []
heu = []
starRow = 0
numOfRows = 9
numOfCols = 9
g = 1                               # 
for row in range(numOfRows):        # Create map
    map.append([])                  # Add an empty row
    for col in range(numOfCols):
        map[row].append(" ")

for col in range(numOfCols):        # Create wall
    map[col][0] = "x"               # left border
    map[col][numOfCols-1] = "x"     # right border
    map[0][col] = "x"               # up border
    map[numOfCols-1][col] = "x"     # down border

for w in range(2,numOfCols-2):      # Create obstacle
    map[4][w] = "w"

#Setup
startRow = 1                
startCol = numOfCols//4
map[startRow][startCol] = "A"
map[numOfRows-2][(numOfCols//2)+1] = "B"
printMap()


# Your task for next week is to create a for loop
# So, I don't need to do it one by one
# Pathfinding algorithm:
#turnRight(startRow,startCol)
downWards(startRow,startCol)
#turnLeft(startRow,startCol)
# repeat
#turnRight(startRow+1,startCol)
downWards(startRow+1,startCol)
#turnLeft(startRow+1,startCol)  
# repeat 2
turnRight(startRow+2,startCol)
#downWards(startRow+2,startCol)
#turnLeft(startRow+2,startCol)  
# repeat 3
turnRight(startRow+2,startCol+1)
#downWards(startRow+2,startCol+1)
#upWards(startRow+2,startCol+1) 
# repeat 4
turnRight(startRow+2,startCol+2)
#downWards(startRow+2,startCol+2)
#upWards(startRow+2,startCol+2) 
# repeat 5
turnRight(startRow+2,startCol+3)
#downWards(startRow+2,startCol+3)
#upWards(startRow+2,startCol+3) 
# repeat 6
turnRight(startRow+2,startCol+4)
#downWards(startRow+2,startCol+4)
#upWards(startRow+2,startCol+4) 
# repeat 6
#turnRight(startRow+2,startCol+5)
downWards(startRow+2,startCol+5)
#upWards(startRow+2,startCol+5)
# repeat 7
#turnRight(startRow+3,startCol+5)
downWards(startRow+3,startCol+5)
#upWards(startRow+3,startCol+5)
printMap()
print(heu)