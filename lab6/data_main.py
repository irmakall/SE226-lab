from data_package import remove_duplicates, strip_whitespaces, find_maximum, find_minimum, calculate_mean

l = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21):\n")

string_list = l.split(",")
space = strip_whitespaces(string_list)
clean = remove_duplicates(space)

isValid = True
for i in clean:
    i = i.strip()
    if not i.replace(".", "", 1).replace("-", "", 1).isdigit():
        isValid = False
        break

if isValid:
    newList = []
    for i in clean:
        newList.append(float(i))

    print("Cleaned and unique data:", newList)
    print("--------------------")
    print("Mean: ", calculate_mean(newList))
    print("Maximum:", find_maximum(newList))
    print("Minimum:", find_minimum(newList))
else:
    print("Data Error: Please make sure you only enter numbers separated by commas.")