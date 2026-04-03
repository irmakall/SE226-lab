def factorial(x):
    if x==0: return 1
    return factorial(x-1)*x

valueX=int(input("Enter x:"))
valueN=int(input("Enter n:"))

value = lambda x,i:(x**(2*i)/factorial(2*i))

def exp_x(x,n):
    total=0
    for i in range(n):
        total+=((-1)**i)* value(x,i)
    return total
val=0
def g(n,r):
    """It uses recursion by reducing n in each call.
    A global variable 'val' accumulates the sum of each r**n
    If n<0 it stops. """
    global val
    if n<0:
        return
    val= val+(r**n)
    g(n-1,r)

print(exp_x(valueX,valueN))
print(g.__doc__)
g(2,2)

print(val)