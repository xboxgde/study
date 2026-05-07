# 함수 : 기능을 구현해 놓은 것

""""
def fun1() : #함수 정의, 입력 0개, 출력 0개
    print('fun1 함수')

def fun2(a) : # 매개변수 1개, 출력 0개
    print('fun2 함수')
    print(f"{a}")

def fun3(a, b) : # 매개변수 2개, 출력 1개
    print('fun3 함수')
    return a + b


fun1() # 함수 호출

fun2(3) # 인수 1개

c =fun3(3, 4) # 인수 2개
print(f"{c}")
"""

import random as r # random 모듈 (랜덤 함수의 묶음)

def random_num1() :
    r = r.randint(1, 100)
    print(f"randum_num = {r}")
    
def random_num2(a, b) :
    r = r.randint(a, b)
    print(f"randum_num = {r}")

random_num1()

start = int(input("start_num = "))
stop = int(input("stop_num = "))

random_num2(start, stop)
