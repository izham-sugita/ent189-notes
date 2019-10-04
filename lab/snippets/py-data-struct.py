class Student:
    def __init__(self, name, matrix):
        self.name = name
        self.matrix = matrix

#initiate list of students
#Python list 
list_std =[]

print("Student Mini Database")

check = "y"
while( check != "q"):
    name = input("Enter a name: ")
    matrix = input("Enter matrix number: ")

    stud = Student(name,matrix)
    list_std.append(stud)
    
    check = input("Continue? (y)es/(q)uit ")

#print all after quit
for std in list_std:
    print(std.name, std.matrix)
