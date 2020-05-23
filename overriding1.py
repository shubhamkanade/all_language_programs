class Parent:
    
    def __init__(self,name):
        self.name = name
    
    def displayName(self):
        print("name is :",self.name)
    
    def __del__(self):
        class_name = self.__class__.__name__
        print(class_name,"destroyed")
        
class Child(Parent):
    
    def __init__(self,name,address):
        self.name = name
        self.address = address
    
    def displayName(self):
        print("Name is : ",self.name)
        print("Address is :",self.address)
    
    def __del__(self):
        class_name = self.__class__.__name__
        print(class_name,"destroyed")
    
n = input("Enter name ")
a = input("Enter Address ")
obj = Child(n,a)
obj.displayName()