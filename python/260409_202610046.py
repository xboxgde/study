# 반복문 (for : 반복의 횟수를 아는 경우)
# range(start, stop, step) : 범위 함수
# range(start, stop) : step 생략시 기본값 1로 설정
# range(stop) : start 생략시 기본값 0으로 설정

# 1 ~ 100 사이 3의 배수 또는 7의 배수만 출력하는 프로그램

"""
for i in range(1, 101) :

    if i % 3 == 0 or i % 7 == 0 :
        print(i, end = " ")
"""




# 오늘의 운세

"""
import random as r

rand = r.randint(1, 10)

print(f"오늘의 운세는 {rand}점 입니다")

for i in range(rand) :
    print("★", end = "")
"""




# 사용자에게 정수를 입력받아 출력하는 프로그램
# 1 ~ n 사이 숫자 출력

# 결과 화면
"""
정수 입력 : 5
1 2 3 4 5
"""

"""
num = int(input("정수 입력 : "))

for i in range(1, num + 1) :
    print(i, end = " ")
"""




# start ~ stop 사이의 숫자를 출력하는 프로그램

# 결과 화면
"""
시작 숫자 : 3
끝 숫자 입력 : 7

3 4 5 6 7
"""

"""
start = int(input("시작 숫자 : "))
stop = int(input("끝 숫자 : "))

print()

for i in range(start, stop + 1) :

    if i == stop :
        print(f"{i}", end = " ")
    else :
        print(f"{i}", end = ", ")
"""




# 1 ~ n 사이 짝수의 누적곱을 구하는 프로그램

# 결과 화면
"""
정수 입력: 50
1 ~ 50 사이 짝수의 누적곱은 xxx입니다.
"""

"""
total = 1 # 누적 변수는 초기화 필수
num = int(input("정수 입력 : "))

for i in range(1, num + 1) :
    if i % 2 == 0 :
        total *= i

print(f"1 ~ {num} 사이 짝수의 누적곱은 {total}입니다.")
"""




# 주사위 (1 ~ 6) 2개 200번 던져 출력하는 프로그램

# 결과 화면
"""
(3,4)
(5,5) - ★
.
.
.
(5,6)
같은 숫자는 총 x회 나왔습니다.
"""

"""
count = 0

import random as r

for i in range(0, 200) :
    rand1 = r.randint(1,6)
    rand2 = r.randint(1,6)

    if rand1 == rand2 :
        print(f"({rand1},{rand2}) - ★")
        count += 1
    else :
        print(f"({rand1},{rand2})")

print(f"같은 숫자는 총 {count}회 나왔습니다.")
"""




# 사용자에게 단(dan)을 입력 받아 구구단을 출력하는 프로그램

# 결과 화면
"""
단(2~9) 입력 : 20
2 ~ 9 사이만 입력 가능.
"""

# 결과 화면2
"""
단(2~9) 입력 : 2
2 ~ 9 사이만 입력 가능.

2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
...
2 * 9 = 18
"""

dan = int(input("단(2~9) 입력 : "))

if 1 <= dan <= 9 :
    for i in range(1, 10) :
        print(f"{dan} * {i} = {dan * i}")
    
else :
    print("2 ~ 9 사이만 입력 가능.")


