import random
import math

def printMap():
    for row in map:
        for value in row:
            print(value, end=' ')
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

def turnRight(x,y):
    if map[x][y+1] == "w" or map[x][y+1] == "x":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y+1] = "A"
        print("Head right")
        calcStraightLine()

def turnLeft(x,y):
    if map[x][y-1] == "w" or map[x][y-1] == "x":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x][y-1] = "A"
        print("Head left")
        calcStraightLine()

def downWards(x,y):
    if map[x+1][y] == "w" or map[x+1][y] == "x":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x+1][y] = "A"
        print("Head down")
        calcStraightLine()

def upWards(x,y):
    if map[x-1][y] == "w" or map[x-1][y] == "x":
        calcStraightLine()
    else:
        map[x][y] = "#"
        map[x-1][y] = "A"
        print("Head up")
        calcStraightLine()

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
for w in range(2,numOfCols-1): # Create obstacle
    map[4][w] = "w"
# map[3][2] = "w"
# map[3][6] = "w"
startRow = 1
startCol = numOfCols//4
map[startRow][startCol] = "A"
endRow = numOfRows-2
endCol = (numOfCols//2)+1
map[numOfRows-2][(numOfCols//2)+1] = "B"
printMap()
# Your task for next week is to create a for loop
# So, I don't need to do it one by one
# Pathfinding algorithm:

# ------------------------------------------------Algorithm----------------------------------------------------

# Assumption: there is always a reachable path from A to B
# Found route may not be most effective

startNode = [1,2]
path = []    # keeps the route of A to B
path.append(startNode)
finish = False
i = 0
max_distance = 8*math.sqrt(2)

while not finish:    # keeps looping until B is reached
    currentNode = path[i]
    curr_row = currentNode[0]
    curr_col = currentNode[1]
    neighbours =[]
    j = 0

    # check if goal state is found
    if map[curr_row][curr_col + 1] == 'B': 
        turnRight(curr_row, curr_col)
        map[curr_row][curr_col + 1] = 'B'
        finish = True
        break
    elif map[curr_row][curr_col - 1] == 'B': 
        turnLeft(curr_row, curr_col)
        map[curr_row][curr_col - 1] = 'B'
        finish = True
        break
    elif map[curr_row + 1][curr_col] == 'B': 
        downWards(curr_row, curr_col)
        map[curr_row + 1][curr_col] = 'B'
        finish = True
        break
    elif map[curr_row - 1][curr_col] == 'B': 
        upWards(curr_row, curr_col)
        map[curr_row - 1][curr_col] = 'B'
        finish = True
        break

    for neighbour in [[0,1], [0,-1], [1,0], [-1, 0]]:
        neighbour_node = [curr_row + neighbour[0], curr_col + neighbour[1]]
        neighbour_row = neighbour_node[0]
        neighbour_col = neighbour_node[1]

        # calculate heuristic values of each neighbour
        heu.append(calcDistance(neighbour_row, neighbour_col, endRow, endCol))

        # checks if going to crash into wall or obstacle
        # if going to crash, assign max_distance value (which means: that path will not be considered)
        if map[neighbour_row][neighbour_col] == 'x' or map[neighbour_row][neighbour_col] == 'w':
            heu[j] = max_distance

        # checks if there is infinite loop (keeps switching between same positions)
        # if there is a loop, assign max_distance value (which means: that path will not be considered)
        previous_row = path[i - 1][0]
        previous_col = path[i - 1][1]
        if neighbour_row == previous_row and neighbour_col == previous_col:
            heu[j]= max_distance

        j += 1
    
    # goes to neighbour that has the smallest heuristic value
    # then append that neighbour to the route
    minimum = heu.index(min(heu)) 
    if minimum == 0:    # neighbour with least heu value is to the right, so turn right
        turnRight(curr_row, curr_col)
        next_position = [curr_row, curr_col + 1]
        path.append(next_position)
    elif minimum == 1:    # neighbour with least heu value is to the left, so turn left
        turnLeft(curr_row, curr_col)
        next_position = [curr_row, curr_col - 1]
        path.append(next_position)
    elif minimum == 2:    # neighbour with least heu value is below, so turn up
        downWards(curr_row, curr_col)
        next_position = [curr_row + 1, curr_col]
        path.append(next_position)
    elif minimum == 3:    # neighbour with least heu value is above, so turn down
        upWards(curr_row, curr_col)
        next_position = [curr_row - 1, curr_col]
        path.append(next_position)
    del heu[:]   # reset heu array
    
    i += 1    # increment index of path / route
    
printMap() 

# -------------------------------------------------------End of algorithm------------------------------------------------------

#turnRight(startRow,startCol)
 #downWards(startRow,startCol)
#turnLeft(startRow,startCol)
# repeat
#turnRight(startRow+1,startCol)
 #(startRow+1,startCol)
#turnLeft(startRow+1,startCol)  
# repeat 2
 #turnRight(startRow+2,startCol)
#downWards(startRow+2,startCol)
#turnLeft(startRow+2,startCol)  
# repeat 3
 #turnRight(startRow+2,startCol+1)
#downWards(startRow+2,startCol+1)
#upWards(startRow+2,startCol+1) 
# repeat 4
 #turnRight(startRow+2,startCol+2)
#downWards(startRow+2,startCol+2)
#upWards(startRow+2,startCol+2) 
# repeat 5
 #turnRight(startRow+2,startCol+3)
#downWards(startRow+2,startCol+3)
#upWards(startRow+2,startCol+3) 
# repeat 6
  #turnRight(startRow+2,startCol+4)
#downWards(startRow+2,startCol+4)
#upWards(startRow+2,startCol+4) 
# repeat 6
#turnRight(startRow+2,startCol+5)
 #downWards(startRow+2,startCol+5)
#upWards(startRow+2,startCol+5)
# repeat 7
#turnRight(startRow+3,startCol+5)
 #downWards(startRow+3,startCol+5)
#upWards(startRow+3,startCol+5)
 #printMap()