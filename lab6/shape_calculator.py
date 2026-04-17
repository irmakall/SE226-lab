import geometry_utils

import geometry_utils

shape=input("Available shapes: circle, rectangle, triangle"+
            "\nAvailable calculations: _area, _perimeter (e.g., circle_area)"+
            "\nEnter the operation you want to perform:")


operations = {
    "circle_area": geometry_utils.circle_area,
    "circle_perimeter": geometry_utils.circle_perimeter,
    "rectangle_area": geometry_utils.rectangle_area,
    "rectangle_perimeter": geometry_utils.rectangle_perimeter,
    "triangle_area": geometry_utils.triangle_area
}


if shape in operations:
    operation = operations[shape]
    if shape== "circle_area":
        radius=float(input("Enter radius:"))
        print("Result: " , operation(radius))
    elif shape== "circle_perimeter":
        radius = float(input("Enter radius:"))
        print("Result: ", operation(radius))
    elif shape == "rectangle_area":
        width = float(input("Enter width:"))
        height = float(input("Enter height:"))
        print("Result: ", operation(width,height))
    elif shape == "rectangle_perimeter":
        width = float(input("Enter width:"))
        height = float(input("Enter height:"))
        print("Result: ", operation(width,height))
    elif shape == "triangle_area":
        base = float(input("Enter base:"))
        height = float(input("Enter height:"))
        print("Result: ", operation(base,height))
else: print("It is not valid")