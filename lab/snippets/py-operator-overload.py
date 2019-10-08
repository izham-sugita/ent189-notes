class vector:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __str__(self):
        return "vector(%d,%d)"%(self.a,self.b)

    def __add__(self,other):
        return vector(self.a + other.a, self.b + other.b)

v1 = vector(2,10)
v2 = vector(5,5)

print(v1+v2)
