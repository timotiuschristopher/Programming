# for i in range (1,5,1):           #12321
#     for j in range (0,4-i):
#         print(end = ' ')
#     for k in range (1,i+1):
#         print(k, end = '')
#     for l in range (i-1,0,-1):
#         print(l, end ='')
#     print()

# for i in range (1,8):
#     for j in range (0,7-i):
#         print(end = '*')
#     for k in range (1,i+1,8):
#         print(k, end = '')
#     for p in range (2,i+1,2):
#         print(p, end = '')
#     for r in range (i-2,0,-2):
#         print(r, end = '')
#     for l in range (1,i,8):
#          print(l, end ='')
#     print()

for i in range (0,4):
    for j in range (0,3-i):
        print(end = ' ')
    for k in range (0,i+1):
        left = pow(2,k)
        print(left, end = '')
    for l in range (i-1,0,-1):
        right = pow(2,l)
        print(right, end ='')
    for p in range (1,i+1,4):
        print(p, end = '')
    print()