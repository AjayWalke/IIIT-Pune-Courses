class user:
    def __init__(self, username, password):
        self.username = username
        self.password = password

    def validity(self):
        i, j, k = 0,0,0
        if 5 < len(self.password) < 13:
            for key in self.password:
                if 'a' <= key <= 'z': i += 1
                if 'A' <= key <= 'Z': j += 1
                if '0' <= key <= '9': k += 1
            if i > 0 and j > 0 and k > 0:
                self.display()
            else:
                print("Error : At least one char from [a-z][A-Z][0-9]")
        else:
            print("Error : Invalid Length")

    def display(self):
        print("!!!!Registered Successfully!!!!")


while True:
    print("$$$ x = 1 => Exit $$$")
    x = input("USERNAME : ")
    if x == '1': exit()
    y = input("PASSWORD : ")
    obj = user(x, y)
    obj.validity()
