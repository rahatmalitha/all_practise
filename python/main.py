def changecase(func):
    def inner():
        return func().upper()
    return inner

@changecase
def printHello():
    return "Hello WOrld"

print(printHello())