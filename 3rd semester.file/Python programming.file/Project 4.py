Expenditure = 0


class Employee:
    def __init__(self, id, Emp_name, designation):
        self.id = id
        self.Emp_name = Emp_name
        self.designation = designation

    def display_emp_info(self):
        print("Employee id : ", self.id)
        print("Employee Name : ", self.Emp_name)
        print("Employee Designation : ", self.designation)


class Technical_officer(Employee):
    salary = 40000 + 0.1 * 40000 + 0.2 * 40000

    def Salary(self):
        print("Salary Info(Technical officer) :\n Basic = Rs. 40000\n DA = 10%\n HRA = 20%")

    def salary_val(self):
        print("Total Salary : ", self.salary)
        global Expenditure
        Expenditure += self.salary


class Manager(Employee):
    salary = 30000 + 0.1 * 30000 + 0.2 * 30000

    def Salary(self):
        print("Salary Info(Manager) :\n Basic = Rs. 30000\n DA = 10%\n HRA = 20%")

    def salary_val(self):
        print("Total Salary : ", self.salary)
        global Expenditure
        Expenditure += self.salary


class Software_associate(Employee):
    salary = 20000 + 0.1 * 20000 + 0.2 * 20000

    def Salary(self):
        print("Salary Info(Software associate) :\n Basic = Rs. 20000\n DA = 10%\n HRA = 20%")

    def salary_val(self):
        print("Total Salary : ", self.salary)
        global Expenditure
        Expenditure += self.salary


# User input of 10 Employee
# categorize into respective class
# salary display
# Employee Display
obj = []
print("Enter ID NAME DESIGNATION : ")
for i in range(0, 3):
    a = int(input())
    b = input()
    c = input()
    if c == "Technical officer":
        obj.append(Technical_officer(a, b, c))
    if c == "Manager":
        obj.append(Manager(a, b, c))
    if c == "Software associate":
        obj.append(Software_associate(a, b, c))

# display employee details
for i in obj:
    i.display_emp_info()
    i.Salary()
    i.salary_val()

# Search operation
while True:
    d = int(input("Enter the ID to search : "))
    for i in obj:
        if i.id == d:
            i.display_emp_info()
            a = input("Exit(0)")
            if a == '0': exit()

# Salary Expenditure on all employee
# print("Total Expenditure on Employees : ", Expenditure)
