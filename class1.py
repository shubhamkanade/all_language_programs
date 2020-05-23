class Arithematic:
    object_count = 0
    def __init__(self,no1,no2):
        self.no1 = no1
        self.no2 = no2
        Arithematic.object_count += 1 
        
    def add(self):
        print("Addition is %d " %( self.no1 + self.no2))
        
    def mult(self):
        print("Multiplication is {} ".format(self.no1 * self.no2))
        
    def sub(self):
        print("Subtraction is ",self.no1 - self.no2)
        
    @classmethod
    def gun(cls):
        print("It can access only class varaibles")
        print(Arithematic.object_count) 
        
    @staticmethod    
    def run():
        print("This is static method")
        
Arithematic1 = Arithematic(4 ,3)
Arithematic1 = Arithematic(5 ,2)
Arithematic1.add()
Arithematic1.mult()
Arithematic1.sub()
Arithematic.gun()
