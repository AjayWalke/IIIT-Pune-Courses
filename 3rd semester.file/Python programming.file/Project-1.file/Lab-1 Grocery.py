shop = {
    'Sugar': [2, 30],
    'Salt': [3, 40],
    'Table': [4, 1000],
    'Board': [5, 6000],
    'Mouse': [6, 700],
    'Laptop': [8, 8000],
    'Bags': [9, 400],
    'Gloves': [10, 20],
    'Mobile': [11, 3000],
    'Tablet': [15, 9000]
}

# Display all items
print("Name      ", "Quantity ", "   Price")
for keys, item in shop.items():
    print(keys, end="\t\t")
    print(item[0], end="\t\t\t")
    print(item[1])

# Add Shopping List
list1 = {'Mobile': 4,
         'Tablet': 2,
         'Laptop': 8}
