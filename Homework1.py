1. '''Write a program that asks the user for weight in kilograms and converts it to pounds. There are 2.2 pounds in a kilogram.'''
weight_kg = input("Weight in kg = ")
weight_pound = float(weight_kg) * 2.2
print("Weight in pound =", weight_pound)

2. ''' Write a program that generates and prints 50 random integers, each between 3 and 6.'''
a = input("a = ")
b = input("b = ")
c = (float(a)+float(b))/(float(a)-float(b))
print("c=a+b/a-b", a,"+",b,"/",a,"-",b,"=",c)

3. ''' Write a program that asks the user to enter two numbers, x, and y, and computes | x − y | /  x+y. '''
import random

for i in range (45):
    random_number = random.randint (3,6)
    print("random_Numbers = ", random_number)

4. ''' Write a program that asks the user to enter three numbers (use three separate input statements). Create variables called total and average that hold the sum and average of the three numbers and print out the values of total and average.
''' 

a = input("a = ") --
b = input("b = ")
c = input("c = ")
sum = (float(a)+float(b)+float(c))
avg = (float(a)+float(b)+float(c))/3
print("avg = ", avg )
print("sum = ", sum) 

5. ''' Print a triangle like the one below.'''
for i in range(1, 10):
    print('|' * i)
