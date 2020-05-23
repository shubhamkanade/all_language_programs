class Animal:
    
    def eat(self):
        print("Eating")

class Dog(Animal):        
    def bark(self):
        print("Barking")

d = Dog()
d.bark()
d.eat()

x= "hello world"
print('h' in x)
print('hello' in x)