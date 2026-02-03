input_value = int(input())
count = 1

while input_value > 1:
    if input_value % 2 != 0:
        count += 1
        input_value -= 1
    else:
        input_value //= 2   # divisão inteira, equivalente ao /= 2 em C++
        
print(count)
