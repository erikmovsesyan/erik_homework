# 1. Օգտագործողըներմուծումէամբողջդրականթիվ։Գեներացնելեւտպել
# dictionary,որիkey-երըկլինեն0-իցմինչեւներմուծվածթիվըներառյալ,իսկ
# value-ներըկլինենայդkey-երիխորանարդները
def generate_cube(n):
    if not isinstance(n, int):
        raise ValueError("Input must be a positive integer.")
    cube_dict = {i: i ** 3 for i in range(n + 1)}
    return cube_dict
try:
    num = int(input("Enter a positive integer: "))
    print("Result:", generate_cube(num))
except ValueError as ve:
    print("Error:", ve)

# 2. Իրականացնել ֆունկցիա, որը կվերադարձնի [1-200] միջակայքի բոլոր զույգ թվերը:
def even_numbers():
    return [num for num in range(2, 201, 2)]
print("Even numbers in range [1-200]:", even_numbers())

# 3. 1-200 զույգ թվեր
my_list = [[i + j * 3 for j in range(4)] for i in range(3, 7)]
print("List:", my_list)

