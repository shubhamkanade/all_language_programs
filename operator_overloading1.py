class vector:
    
    def __init__(self,no1,no2):
        self.no1 = no1
        self.no2 = no2
    
    def __str__(self):
        return "vector (%d %d)" % (self.no1 ,self.no2)

    def __add__(self,other):
        return vector(self.no1 + other.no1 , self.no2 + other.no2)

def main():
    vobj = vector(3,4)
    vobj1 = vector(7,8)
    print(vobj + vobj1)

main()
            