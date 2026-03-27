from collections import Counter

allItems = list()
userNumber = int(input("Enter number of users: "))
users = dict()

for i in range(userNumber):
    username = input("Enter username: ")
    itemNumber = int(input("How many items? "))
    items = list()

    for j in range(itemNumber):
        itemName = input("Item " + str(j + 1) + ": ")
        items.append(itemName)

    users[username] = items
    print()

print("USER DATA:")
for (key, values) in users.items():
    print(key + " -> " + str(values))

print("COMMON ITEMS:")
for values in users.values():
    allItems.extend(set(values))

counter = Counter(allItems)

for (key, values) in counter.items():
    if values > 1:
        print(key)

print("UNIQUE ITEMS:")
for (key, values) in counter.items():
    if values == 1:
        print(key)

print("MOST POPULAR ITEM:")
maxVal = max(counter.values())

for (key, values) in counter.items():
    if values == maxVal:
        print(key)