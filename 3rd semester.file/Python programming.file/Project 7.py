import pickle

class Empinfo:
    def __init__(self, empid, name, emailid):
        self.empid = empid
        self.name = name
        self.emailid = emailid

class Deptinfo:
    def __init__(self, empid, department, designation):
        self.empid = empid
        self.department = department
        self.designation = designation

class Salinfo:
    def __init__(self, empid, basic, DA, HRA):
        self.empid = empid
        self.basic = basic
        self.DA = DA
        self.HRA = HRA

class combine:
    def __init__(self, empid, name, emailid,department, designation,basic, DA, HRA):
        self.empid = empid
        self.name = name
        self.emailid = emailid
        self.department = department
        self.designation = designation
        self.basic = basic
        self.DA = DA
        self.HRA = HRA


list1, list2, list3 = [], [], []
# Task1 = Inserting Data
print("####### Insert Data #######")
for i in range(0, 5):
    print("\nEmployee ", i + 1)
    a = int(input("EMP ID : "))
    b = input("Name : ")
    c = input("EMAIL ID : ")
    d = input("Department : ")
    e = input("Designation : ")
    f = int(input("Basic : "))
    g = int(input("DA : "))
    h = int(input("HRA : "))
    list1.append(Empinfo(a, b, c))
    list2.append(Deptinfo(a, d, e))
    list3.append(Salinfo(a, f, g, h))

# file handling
file = open("empinfo.txt", 'wb')
pickle.dump(list1, file)
file.close()

file1 = open("dept.txt", 'wb')
pickle.dump(list2, file1)
file1.close()

file2 = open("salary.txt", 'wb')
pickle.dump(list3, file2)
file2.close()

file1 = open("empinfo.txt", 'rb')
f1 = pickle.load(file1)
file2 = open("dept.txt", 'rb')
f2 = pickle.load(file2)
file3 = open("salary.txt", 'rb')
f3 = pickle.load(file3)

l4 =[]
for obj1 in f1:
    for obj2 in f2:
        for obj3 in f3:
            if obj1.empid == obj2.empid == obj3.empid:
                l4.append(combine(obj1.empid,obj1.name,obj1.emailid,obj2.department,obj2.designation,obj3.basic,obj3.DA,obj3.HRA))

file3 = open("sample.txt", 'wb')
pickle.dump(l4, file3)
file3.close()

print("################# Employee Details ##################")
print("-----------------------------------------------------------")
print("Id\tName\tEmailId\t\tDepartment Designation Basic\tDA\tHRA")
print("-----------------------------------------------------------")
file3 = open("sample.txt", 'rb')
f3 = pickle.load(file3)
for i in f3:
    print(i.empid,i.name,i.emailid,i.department,i.designation,i.basic,i.DA,i.HRA)
print("-----------------------------------------------------------")
a = input("\nEnter the Employee Name : ")
print("Id\tName\tEmailId\t\tDepartment Designation Basic\tDA\tHRA")
for i in f3:
    if a == i.name:
       print(i.empid,i.name,i.emailid,i.department,i.designation,i.basic,i.DA,i.HRA)
