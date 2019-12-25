numbers = input().split(" ")
numbers.sort(key=lambda x: len(x))
maxlen = len(numbers[-1])
numbers = [x for x in numbers if len(x) == maxlen]
print(numbers.sort())