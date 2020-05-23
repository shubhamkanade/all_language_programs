class Student:
    
    def __init__(self,name):
        self.name = name
        print("this is parameterized constructor")
    
    def show(self):
        print(self.name)

s1 = Student("Saurabh")
s1.show()