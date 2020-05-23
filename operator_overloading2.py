class Point:
    
    def __init__(self,x,y):
        self.x = x
        self.y = y
    
    def __str__(self):
        return "({0},{1})".format(self.x,self.y)

    def __add__(self,other):
        return Point(self.x + other.x,self.y + other.y)
    
p1= Point(3,-1)

p2 = Point(2,4)

print(p1 + p2)