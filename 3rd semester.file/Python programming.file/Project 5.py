import pickle
class Demo1:
    def __init__(self,ID,MIS,EMAIL,RESULT):
        self.ID = ID
        self.MIS = MIS
        self.EMAIL = EMAIL
        self.RESULT = RESULT

class Demo2(Demo1):
    def __init__(self, ID, MIS, EMAIL, RESULT, T1, T2, End):
        super().__init__(ID, MIS, EMAIL, RESULT)
        self.T1 = T1
        self.T2 = T2
        self.End = End


list1 = []
# Task1 = Inserting Data
print("####### Insert Data #######")
n = int(input("NO of Students : "))
for i in range(0,n):
    print("\nStudent ", i+1)
    a = int(input("ID : "))
    b = int(input("MIS : "))
    c = input("EMAIL : ")
    d = input("Result : ")
    e = int(input("T1 : "))
    f = int(input("T2 : "))
    g = int(input("End : "))
    list1.append(Demo2(a,b,c,d,e,f,g))

# Task2 = Updating the list
print("####### Update Data #######")
a = int(input("\nPress 1 -> Update  :: "))
if a == 1:
    a1 = int(input("Enter ID  :: "))
    for obj in list1:
        if obj.ID is a1:
            print("Enter New Details")
            a = int(input("ID : "))
            b = int(input("MIS : "))
            c = input("EMAIL : ")
            d = input("Result : ")
            e = int(input("T1 : "))
            f = int(input("T2 : "))
            g = int(input("End : "))
            obj.ID = a
            obj.MIS = b
            obj.EMAIL = c
            obj.RESULT = d
            obj.T1 = e
            obj.T2 = f
            obj.End = g

# Task = Saving in file
file = open("71 Python Lab 5.txt",'wb')    # binary mode
pickle.dump(list1,file)
file.close()
file1 = open("71 Python Lab 5.txt",'rb')
list2 = pickle.load(file1)

# Task3 = Display Records
print("\n########## Student Record ##########")
print("-------------------------------------")
print("ID MIS EmailID       Result  T1 T2 T3")
print("-------------------------------------")
for obj in list2:
    print(obj.ID, obj.MIS, obj.EMAIL, obj.RESULT,"\t", obj.T1, obj.T2, obj.End)
print("-------------------------------------")
