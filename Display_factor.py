class Number:
    
    def __init__(self,no):
        self.no = no
    
    def DisplayFactor(self):
    
        print("Value of no is %d" % (self.no))
        if(self.no < 0):
            self.no = -self.no
        
        for i in range(1,self.no+1,1):
            if(self.no % i == 0):
                print(i)

    def changevalue(self):
        self.no = 23
        print("Value of no is %d" % (self.no))
        print(self.no)
        

def main():
    any_number = Number(6)
    any_number.DisplayFactor()
    any_number.changevalue()
    any_number.DisplayFactor()

main()