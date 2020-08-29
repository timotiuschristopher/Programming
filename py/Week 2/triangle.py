#input a value and eval is to convert String to Integer
#the input is in form of String
height, base = eval(input("Enter the value of the height and the base (height,base): "))
#base = eval(input("Enter the value of the base: "))
#calculate the area
area = (height * base) / 2
#print the results
print("The area of the triangle of height", height, "and base", base, "is", area)