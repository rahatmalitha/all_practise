def func(exp,x):
    return eval(exp)

def bisection(a, b, max_iter, exp):
    if (func(exp, a) * func(exp, b) >= 0):
        print("Invalid interval. The function must have opposite signs at a and b.\n")
        return

    c=0.00
    iter = 0
    print("Iter\t  a\t\t   b\t\t   c\t\t   f(c)\n")
    print("--------------------------------------------------------------------\n")

    while (iter < max_iter):
        c = (a + b) / 2
        print(f"{iter + 1}\t {a}\t\t {b}\t\t {c}\t\t {func(exp, c)}")

        if (func(exp, c) == 0.0):
            break
        elif (func(exp, c) * func(exp, a) < 0):
            b = c
        else:
            a = c
        iter+=1

    print("--------------------------------------------------------------------\n")
    print(f"Approximate root after {iter} iterations: x = {c}\n")


exp = input("Enter expression: ")
a=float(input("Enter the interval a: "))
b=float(input("Enter the interval b: "))
max_iterations=float(input("Enter the interval max iterations: "))

bisection(a,b,max_iterations, exp)