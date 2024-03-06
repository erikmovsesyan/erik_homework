"1. Իրականացնել ֆունկցիա, որը կստանա list և կվերադարձնի նոր list, որը պարունակում է
սկզբնական list-ի կենտ ինդեքսներում եղած արժեքները: "

def get_odd_index_value(input_list):
    return input_list[1::2]
original_list = [1,2,3,4,5,6,7,8,9,10]
res = get_odd_index_value(original_list)
print(f"Original list: {original_list}")
print(f"Values of Odd indexes: {res}")

"2. Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր զույգ էլեմենտները նույն զանգվածի մեջ՝ կտեղավորի զանգվածի սկզբից, իսկ կենտերը վերջից:"
def rearrange_array(arr):
    even_elements = [num for num in arr if num % 2 == 0]
    odd_elements = [num for num in arr if num % 2 != 0]

    rearranged_array = even_elements + odd_elements[::-1]
    return rearranged_array
int_array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

res_array = rearrange_array(int_array)
print("Original Array:", int_array)
print("Rearranged Array:", res_array)


"3. Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։ "

def gcd_recursive(a, b):
    if b == 0:
        return a
    else:
        return gcd_recursive(b, a % b) 
num1 = int(input("Enter the first number: ")) 
num2 = int(input("Enter the second number: ")) 
res_gcd = gcd_recursive(num1, num2) 
print(f"The greatest common divisor of {num1} and {num2} is: {res_gcd}") 

"4. Իրականացնել իտերատիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։ "
def gcd_iterative (a, b):
    while b:
        a, b = b, a % b
    return a
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
res_gcd = gcd_iterative(num1, num2)
print(f"The greatest common divisor of {num1} and {num2} is: {res_gcd}")

" 5.  Գրել ծրագիր, որը կտպի զանգվածի կենտ էլեմենտների քանակը։   "
def count_odd_elements(array):
   odd_count = sum(1 for num in array if num % 2 != 0)
   return odd_count
n = int(input("Enter the number of elements in the array: "))
user_array = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]
odd_count = count_odd_elements(user_array)
print(f"Number of odd elements in the array: {odd_count}")

"6.  Գրել ֆունկցիա, որը որպես պարամետր կստանա n թիվը եւ կվերադարձնի n-րդ Ֆիբոնաչիի թիվը:  "

def fibonacci_recursive(n):
    if n <= 0:
        return "Invalid input. Please write a positive number."
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)
try:
    n = int(input("Enter the position of the Fibonacci: "))
    result = fibonacci_recursive(n)
    print(f"The {n}th Fibonacci number is: {result}")

except ValueError:
    print("Invalid input. Please write a positive number.")


"7. Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի եւ տպել արդյունքը։ "

decimal_number = int(input("Enter a decimal number: "))
binary_number = bin(decimal_number)
print(f"The binary representation of {decimal_number} is: {binary_number}")

"8.  Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ եւ վերադարձնում նրա թվանշանների գումարը:"
def sum_of_digits_recursive(num):
    if num < 10:
        return num
    else:
        return num % 10 + sum_of_digits_recursive (num//10)
try:
    input_number = int(input("Write a positive number: "))
    res_sum = sum_of_digits_recursive(input_number)
    print (f" The sum of digits of {input_number} is {res_sum}")
except ValueError:
    print ("Invalid input. Please write a valid number.")

"9.հայտարարել list, դասավորել էլեմենտները հակառակ հերթականությամբ եւ տպել 1-5 ինդեքնսերում եղած թվերը` քայլը երկու դնելով: (Slicing) "

my_list = [9, 4, 7, 1, 5, 3, 8, 2, 6]
my_list.sort(reverse=True)
res_slice = my_list[1:6:2]
print (f" Sorted List (in reverse order): {my_list} ")
print (f" Elements from indexes 1 to 5 with a step of 2: {res_slice} ")
