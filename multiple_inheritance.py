class First:
    def __init__(self):
        print("first")
        
class Second:
    def __init__(self): 
        print("Second")

class Third(Second,First):
    def __init__(self):
        super().__init__()
        print("third")
        
Third()
