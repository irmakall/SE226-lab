result = int(input("Enter a large integer:"))
hours = result // 3600
minutes = (result % 3600) // 60
seconds = (result % 3600) % 60
print(result, " seconds is ", hours," hours,", minutes," minutes, and", seconds," seconds.")
