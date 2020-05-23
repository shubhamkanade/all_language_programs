class Employee:
    Empcount = 0
    
    def __init__(self,name,salary):
        self.name = name
        self.salary = salary
        Employee.Empcount += 1
    
    def display(self):
        print("name is {} and salary is {}".format(self.name , self.salary))
    
    @classmethod
    def displaycount(cls):
        print("The count of total employee %d" % Employee.Empcount)
        print("It can access only class variables")

        
employee1 = Employee("Amar",10000)

employee2 = Employee("Akbar",20000)

employee3 = Employee("Saurabh",25000)

employee1.display()
employee2.displaycount()
