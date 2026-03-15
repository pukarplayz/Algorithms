number = []

for i in range(0,3):
    num = int(input(f"Enter Number {i+1}: "))
    number.append(num)

large = number[0]

for i in range(0,3):
    if number[i] > large:
        large = number[i]

print(f"The Largest number is {large}")