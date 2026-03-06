

x=int(input("Please enter a positive integer greater than 9: "))

print(x, end="")
count=0
while x > 9:
    currentSum=0
    tempX=x
    while tempX>0:
        currentSum+=(tempX%10)
        tempX//=10

    x=currentSum
    count+=1
    print(" → ",currentSum,end="")

print("\nFinal value: ", x)
print("Total steps: ", count)

#question 2
from operator import contains

while True:
    x = int(input("Please enter a number between 10 and 100: "))

    if 10 <= x <= 100:
        break
    print("Invalid input. ", end="")

fizz=0
buzz=0
fizzbuzz=0
for a in range(1,x+1):

    if a % 7 == 0:
        print(f"({a} is skipped)")
        continue
    if a % 3 == 0 and a % 5 == 0:
        print("FizzBuzz")
        fizzbuzz+=1
    elif a % 3 == 0:
        print("Fizz")
        fizz+=1
    elif a % 5 == 0:
        print("Buzz")
        buzz+=1
    else:
       print(a)
print("--- Summary ---")
print("Fizz count : ",fizz)
print("Buzz count : ",buzz)
print("FizzBuzz count: ",fizzbuzz)

#question 3


x= int(input("Please enter a number between 3 and 9: "))

for i in range(1,2*x):
    k = x - abs(x - i)
    for j in range(1,k+1):
        print(j,end=" ")

    print()








