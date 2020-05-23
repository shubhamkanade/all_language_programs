class Employee:
    'common base class for all employee'
    empCount = 0
    
    def __init__(self,name,salary):
        self.name = name
        self.salary = salary
        Employee.empCount += 1
        
    def displayCount(self):
        print("Total Employee %d " % Employee.empCount)
    
    def displayEmployee(self):
        print("Name :" ,self.name,"salary :",self.salary)
        
emp1 = Employee("Amar",3000)
emp2 = Employee("akabar",4000)

emp2.displayEmployee()
emp2.displayCount()

emp1.age = 7
#del emp1.age
print("age is %d" % emp1.age)
print(getattr(emp1, 'age'))
print(Employee.empCount)
print(emp1.empCount)
print(Employee.__doc__)
print(Employee.__name__)
