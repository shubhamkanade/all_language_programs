class Factorial:
    
    
    # __ivalue = 0
    def __init__(self , no =6):
        self.no = no
        
    def factorial(self):
        ans = 1
        temp = self.no
        while(temp):
            ans = ans * temp
            temp = temp -1
        return ans
    
    def addvalue(self):
        
        sum = 0
        print("no value is " , self.no)
        sum = sum + self.no
        return sum
    
def main():
    fobj = Factorial(3)
    print("Factorial is %d" % (fobj.factorial()))
    print("sum is %d" % fobj.addvalue())
    print(fobj.__ivalue)
    
if __name__ == "__main__":
    main()    