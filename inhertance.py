class Arithematic:
    
    # def __init__(self,no1,no2):
    #     self.no1 = no1
    #     self.no2 = no2

    def display(self):
        self.no2 = 7
        print("no2 is ", self.no2)
    
    def nextdisplay(self):
        no2 = 10
        print("No2 is ", no2)
    
# class Addition(Arithematic):
    
#     # def __init__(self,no):
#     #     self.no = no
        
#     def addvalue(self):
#         return super(self.no1) + super(self.no2) 

def main():
    aobj = Arithematic()
    aobj.display()
    aobj.nextdisplay()
    aobj.display()    
        
main()     