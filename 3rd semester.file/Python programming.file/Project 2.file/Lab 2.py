# Problem 1 : Sort tuple (name, age, height) according to the name, age and height accordingly 

def Sort_Name(tup):
    return sorted(tup, key=lambda x: x[0])


def Sort_Age(tup):
    return sorted(tup, key=lambda x: x[1])


def Sort_Height(tup):
    return sorted(tup, key=lambda x: x[2])


Names = [("Govinda", 50, 150), ("Akshay", 42, 180),
         ("Ajay", 19, 170), ("Modi", 68, 168),
         ("Vinay", 15, 128), ("Namo", 30, 110)]

print("***************** Output ***************\n")
print("------Sort by Name   : \n", *Sort_Name(Names))
print("\n------Sort by Age    : \n", *Sort_Age(Names))
print("\n------Sort by Height : \n", *Sort_Height(Names))


# problem 2 : print star pattern pyramid

rows = int(input("Enter number of rows: "))
k = 0

for i in range(1, rows + 1):
    for j in range(1, (rows - i) + 1):
        print(end="  ")

    while k != (2 * i - 1):
        print("* ", end="")
        k += 1

    k = 0
    print()
