# 1. Counter Function
def counter():
    count = 0
    def inner():
        nonlocal count
        count += 1
        return count
    return inner

increment_counter = counter()
print(increment_counter())
print(increment_counter())
print(increment_counter())

# 2. Accumulator Function
def accumulator(initial):
    total = initial
    def inner(value):
        nonlocal total
        total += value
        return total
    return inner

plus = accumulator(0)
print(plus(5))
print(plus(3))
print(plus(6))

 # 4. Exponentiation Function
def power_of(X):
    def inner(Y):
        return Y ** X
    return inner
square = power_of(2)
print(square(3))
print(square(4))


# 5. Memoization Function
def memoize(func):
    cache = {}
    def inner(*args):
        if args in cache:
            return cache[args]
        result = func(*args)
        cache[args] = result
        return result
    return inner
@memoize
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)
print(fibonacci(5))
print(fibonacci(10))


# 7. Access Control
def access_control(id):
    def inner():
        if id == "authorized_User_ID":
            return "Access User"
        else:
            return "Unauthorized"
    return inner

access = access_control("authorized_User_ID")
print(access())