t = int(input())

while t > 0:
    k, x = map(int, input().split())
    print(k * x + 1)
    t -= 1