import math

point1_x = int(input("Enter a point 1: "))
point1_y = int(input("Enter a point 1: "))

point2_x = int(input("Enter a point 2: "))
point2_y = int(input("Enter a point 2: "))

result = math.sqrt((point1_x - point2_x)**2 + (point1_y - point2_y)**2)
print(result)
