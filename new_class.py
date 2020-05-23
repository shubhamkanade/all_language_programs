class Employee:
    
    def __init__(self,name,address):
        self.name = name
        self.address = address
        
    def display(self):
        print(self.name,self.address)
        
        
first_employee = Employee("swapnil","pune")
first_employee.display()