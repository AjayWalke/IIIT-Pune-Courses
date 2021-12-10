import tkinter
import pickle
class User:
    def __init__(self, name, email, branch, mis, semester, result):
        self.name = name
        self.email = email
        self.branch = branch
        self.mis = mis
        self.semester = semester
        self.result = result
def Save():
    obj.append(User(input1.get(), input2.get(), input3.get(), input4.get(), input5.get(), input6.get()))
    print("Data saved Successfully !!!!")
    file = open("sample.txt", "wb")
    pickle.dump(obj, file)
    file.close()
def Search():
    search = input8.get()
    for x in obj:
        if search == x.name:
            input1.insert(tkinter.END, x.name)
            input2.insert(tkinter.END, x.email)
            input3.insert(tkinter.END, x.branch)
            input4.insert(tkinter.END, x.mis)
            input5.insert(tkinter.END, x.semester)
            input6.insert(tkinter.END, x.result)
    # accessing database file
    list1 = pickle.load(file1)
    print("Name Email Branch MIS Semester Result")
    for ob in list1:
        print(ob.name, ob.email, ob.branch, ob.mis, ob.semester, ob.result)
def Clear():
    input1.delete(0, tkinter.END)
    input2.delete(0, tkinter.END)
    input3.delete(0, tkinter.END)
    input4.delete(0, tkinter.END)
    input5.delete(0, tkinter.END)
    input6.delete(0, tkinter.END)
    print("Clear Data successfully !!!")


obj = []
window = tkinter.Tk()
label1 = tkinter.Label(window, text='Name', font=('calibre', 10, 'bold'))
label2 = tkinter.Label(window, text='Email', font=('calibre', 10, 'bold'))
label3 = tkinter.Label(window, text='Branch', font=('calibre', 10, 'bold'))
label4 = tkinter.Label(window, text='MIS', font=('calibre', 10, 'bold'))
label5 = tkinter.Label(window, text='Semester', font=('calibre', 10, 'bold'))
label6 = tkinter.Label(window, text='Result', font=('calibre', 10, 'bold'))
input1 = tkinter.Entry(window, text='label1', width=50)
input1.place(x=85, y=100)
label1.place(x=20, y=100)
input2 = tkinter.Entry(window, text='label2', width=50)
input2.place(x=85, y=150)
label2.place(x=20, y=150)
input3 = tkinter.Entry(window, text='label3', width=50)
input3.place(x=85, y=200)
label3.place(x=20, y=200)
input4 = tkinter.Entry(window, text='label4', width=50)
input4.place(x=85, y=250)
label4.place(x=20, y=250)
input5 = tkinter.Entry(window, text='label5', width=50)
input5.place(x=85, y=300)
label5.place(x=20, y=300)
input6 = tkinter.Entry(window, text='label6', width=50)
input6.place(x=85, y=350)
label6.place(x=20, y=350)
input7 = tkinter.Button(window, text='Save', command=Save)
input7.place(x=25, y=400)
input7_1 = tkinter.Button(window, text=' Search ', command=Search)
input7.place(x=25, y=450)
input8 = tkinter.Entry(window, width=50)
input8.place(x=25, y=500)
input9 = tkinter.Button(window, text='Clear', command=Clear)
input9.place(x=25, y=550)
file1 = open("sample.txt", 'rb')
window.mainloop()
