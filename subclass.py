class Student:
    
    def getData(self,rollno,name,course):
        self.rollno = rollno
        self.name = name
        self.course = course
    
    def displayStudent(self):
        print("Roll no :" ,self.rollno )
        print("Name is :",self.name) 
        print("Course is :",self.course)
    
class Test(Student):
    
    def getMarks(self,marks):
        self.marks = marks 
    
    def displayMarks(self):
        print("Marks is :",self.marks)
 
roll_number = int(input("Enter roll number"))
name = input("Enter your name")
course = input("Enter course name")
marks = input("Enter your marks")

first_student = Test()
first_student.getData(roll_number,name,course)
first_student.displayStudent()
first_student.getMarks(marks)
first_student.displayMarks()