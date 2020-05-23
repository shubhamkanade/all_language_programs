class Justcounter:
    __secretcounter = 0
    
    def count(self,name):
        self.name = name
        self.__secretcounter += 1
        print(self.__secretcounter)

counter = Justcounter()
counter.count("sau")
counter.count("sau")
counter.count("sau")
print(counter.name)

counter1 = Justcounter()
counter1.count()
counter1.count()

print(counter1._Justcounter__secretcounter)