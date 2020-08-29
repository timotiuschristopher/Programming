for i in range (1,4):
    for j in range (0,3-i):     #(3,i-1,-1)
        print(end = ' ')
    for s in range (i,0,-1):
        print(s, end ='')
    for t in range(2,i+1):
        print(t, end ='')
    print()
