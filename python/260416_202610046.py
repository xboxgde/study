# 반복문 (while : 조건이 참이면 반복, 거짓이면 중단)

"""
pw= input("입력 : ")

while pw != 'python' :
    print("error")
    pw= input("입력 : ")

else : 
    print("hi")

print("hi")
"""




# 무한루프

# break : 가장 가까운 반복문(while, for)을 벗어남 (if문 제외)
# continue : while 문은 다음 조건으로, for 문은 다음 범위로 이동

"""
while True :

    pw = input("입력 : ")

    if pw != "py" :
        print("error\n")
        continue # 다음 조건으로 이동(생략 가능)
        
    else :
        print("hi")
        break # while 문을 벗어남
"""




# 숫자(1 ~ 100) 맞추기 게임
#컴퓨터가 랜덤 숫자를 발생하고 사용자가 맞추는 게임


# 결과 화면
"""
정수 입력 : 50
50보다 큽니다. 

정수 입력 : 80
80보다 작습니다.

정수 입력 : 77
정답입니다.
"""

"""
import random as r

num = r.randint(1, 100)

while True :

    user = int(input("정수 입력 : "))

    if user == num :
        print("정답")
        break
        
    elif user > num :
        print(f"{user}보다 작습니다\n")

    elif user < num :
        print(f"{user}보다 큽니다\n")
"""




# 사용자가 마음속으로 숫자(1~100)를 생각하고 컴퓨터가 맞추는 프로그램
# yes, high, low만 입력한다는 가정.

# 결과 화면
"""
50인가요?
"""

"""
import random as r


result = 1
result2 = 100

while True :
    num = r.randint(result, result2)
    print(f"{num}인가요?")
    user = input("")

    if user == "yes" :
        print("정답")
        break
    elif user == "high" :
        result = num + 1
        
        
    elif user == "low" :
        result2 = num - 1
"""




# 중첩 for문
# :2 두자리 우측정렬, :<2 좌측정렬, :^2 가운데 정렬

"""
print("구구단 프로그램")

for i in range(2, 10) :
    print(f"{i}단")
    
    for k in range(1, 10) :
        print(f"{i} * {k} = {i * k:<2}") 
    print("")
"""




# 시간과 분을 출력하는 프로그램

"""
for i in range(0, 24) : # 고정값
    for k in range(0, 60) : #반복값
        print(f"{i:2}시 {k:2}분")
"""




# 게임판 사이즈를 입력받아 출력하는 프로그램

# 결과 화면
"""
게임판 사이즈 입력 : 3
 --- --- ---
|   |   |   |
 --- --- ---
|   |   |   |
 --- --- ---
|   |   |   |
 --- --- ---
"""

"""
size = int(input("사이즈 입력 : "))

for i in range(size) :
    print(" ---" * size)
    print("|   " * (size + 1))

print(" ---" * size)
"""




# 1. 다음과 같이 마일을 킬로미터로 변환하는 표를 출력하시오.
# 간격은 빈칸(스페이스)으로 제어해도되지만 이스케이프 문자일 \t 활용해도 좋음! :)

# >> 결과화면 <<
# 마일킬로미터
# 1    1.609
# 2    3.218
#..
# 10   16.090

"""
print("마일\t킬로미터")

for i in range(1, 11) :
    print(f"{i}\t{i * 1.609:.3f}")
"""




# 2. 다음 수열의 합을 계산하는 프로그램을 작성하시오.

# >> 결과화면 <<
# 1/3 + 3/5 + 5/7 + .. 99/101 = 46.1

"""
total = 0

for i in range(1, 100, 2) :
        total += i / (i + 2)
        print(f"{i}/{i + 2}", end="")

        if i == 99 :
            print(f" = {total:.1f}")
        else :
            print(" + ", end="")
"""

 


# 3. 0부터 9까지의 정수에 대하여 반복한다.
# 특정 숫자가 3으로 나누어 떨어지면 'fizz'를 출력하고,
# 5로 나누어 떨어지면 'buzz'를 출력한다.
# 3과 5로 나누어 떨어지면 'fizzbuzz'를 출력한다.
# 숫자가 3 또는 5로 나누어 떨어지지 않으면 '*'를 출력하라.

# >> 결과화면 <<
# fizzbuzz
# *
# *
# fizz
# *
# buzz
# fizz
# *
# *
# fizz

"""
for i in range(0, 10) :

    if i % 3 == 0 and i % 5 == 0 :
        print("fizzbuzz")
    elif i % 3 == 0 :
        print("fizz")
    elif i % 5 == 0 :
        print("buzz")
    else :
        print("*")
"""
