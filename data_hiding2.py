class Myclass:
    __hiddenvariable = 0
    
    def add(self,increment):
        self.__hiddenvariable += increment
        print(self.__hiddenvariable)

obj1 = Myclass()
obj1.add(2)
obj1.add(5)
print(obj1._Myclass__hiddenvariable)