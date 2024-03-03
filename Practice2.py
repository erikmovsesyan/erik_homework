def get_odd_index_value(input_list):
    return input_list[1::2]
original_list = [1,2,3,4,5,6,7,8,9,10]
res = get_odd_index_value(original_list)
print(f"Original list: {original_list}")
print(f"Values of Odd indexes: {res}")
