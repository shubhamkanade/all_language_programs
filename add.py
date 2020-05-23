class Arithematic:
    
    def __init__(self,no1,no2):
        self.no1 = no1
        self.no2 = no2
        
    def add(self):
        return self.no1 + self.no2

    def sub(self):
        return self.no1 - self.no2

def main():

    aobj = Arithematic(5,4)
    print("Addition is %d" % aobj.add())
    print(aobj.sub())
main()