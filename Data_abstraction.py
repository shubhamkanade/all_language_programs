class JustCounter:
    __secrectcount = 0
    
    def count(self):
        self.__secrectcount += 1
        print(self.__secrectcount)
    
counter = JustCounter()
counter1 = JustCounter()
counter.count()
counter1.count()
#print(counter.__secrectcount)