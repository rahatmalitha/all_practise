PI = 22/7

class Circle:
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        return PI * self.radius ** 2
    def perimeter(self):
        return 2 * PI * self.radius

c1 = Circle(21)
print(c1.area())
print(c1.perimeter())