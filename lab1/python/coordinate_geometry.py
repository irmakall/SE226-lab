import math

point1_x = int(input("Enter for point 1 x: "))
point1_y = int(input("Enter for point 1 y: "))

point2_x = int(input("Enter for point 2 x: "))
point2_y = int(input("Enter for point 2 y: "))

result = math.sqrt((point1_x - point2_x)**2 + (point1_y - point2_y)**2)
print(result)
