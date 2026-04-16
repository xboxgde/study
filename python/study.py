#1.

"""
print("안녕하세요. 파이썬!")
"""




#2.

"""
name = "홍길동"
print(f"내 이름은 {name}입니다.")
"""




#3.

"""
a = 15
b = 4

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a // b)
print(a % b)
print(a ** b)
"""




#4.

"""
name = input("입력 : ")
print(f"hi {name}!")
"""




#5.

"""
age = int(input("input : "))
print(f"your age is {2026 - age}")
"""




#6.

"""
num = int(input("input : "))

if num % 2 == 0 :
    print(f" {num}은 짝수")
else :
    print(f" {num}은 홀수")
"""




#7.

"""
score = int (input("score : "))

if score < 70 :
    print("F")
elif 70 <= score < 80 :
    print("C")
elif 80 <= score < 90 :
    print("B")
elif 90 <= score <= 100 :
    print("A")
"""




#8.

"""
num1 = int(input("input : "))
num2 = int(input("input : "))

if num1 < num2 :
    print(f"{num2}")
elif num1 > num2:
    print(f"{num1}")
"""




#9.

"""
for i in range(10, 0, -1) :
    print(i)
"""




#10.

"""
result = 0

for i in range(1, 51) :
    if i % 2 == 0 :
        result += i
print(result)
"""




#11.

"""
num = int(input("input : "))

for i in range(2, 10) :
    print(f"{num} x {i} = {num * i}")
"""




#12.

"""
for i in range(0, 5) :
    for k in range(0, i + 1) :
        print("*", end="")
    print("")
"""

#13.

for i in range(1, 31) :
    if i % 3 == 0 :
        print("Fizz")
    elif i % 5 == 0 :
        print("Buzz")
    else :
        print(f"{i}")


# 별찍기

"""
for i in range(0, 5) :
    for k in range(0, i + 1) :
        print("*", end="")
    print("")

for i in range(5, 0, -1) :
    for k in range(0, i + 1) :
        print("*", end="")
    print("")
"""

