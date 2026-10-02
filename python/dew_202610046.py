# 기말고사
# 학번 : 202610046
# 이름 : 윤정용




# 1.

def area(a, b):
    result = (a * b) / 2
    return result
print("== 삼각형 면적 구하는 프로그램 ==")
num1 = float(input("삼각형 너비 입력: "))
num2 = float(input("삼각형 높이 입력: "))

num3 = area(num1, num2)

print(f"삼각형 면적은 \"{num3:.1f}\" 입니다.")





# 2.
"""
import random
before = []
for i in range(7):
    before.append(random.randint(0, 100))
print(f"원본 출력 : {before}")

after = [i for i in before if i % 2 == 0]
print(f"결과 출력 : {after}")

print(f"짝수 점수는 {len(after)}명 입니다.")

print("\n원본의 평균 이상 점수를 출력합니다.")
print("평균 미만 점수는 0점 처리합니다.")

avg = sum(before) / len(before)
print(f"\n원본 평균 : {avg:.2f}점")
"""




# 3.
"""
while True:
    email = input("이메일 입력: ")

    if email.count("@") == 1:
        id_domain = email.split("@")
        print(f"아이디: {id_domain[0]}")
        print(f"도메인: {id_domain[1]}")
        break
    else:
        print("@는 1개만 작성 가능합니다.\n")
"""




# 4.
"""
import random

a = []
for i in range(5):
    a.append(random.randint(1,15))

print("a 리스트를 출력합니다.")
for i in range(len(a)):
    if a[i] == a[4]:
        print(f"{a[i]}\n")
    else :
        print(f"{a[i]}", end=", ")


for i in a:
    print(f"{i:>2}: {"*" * i}")
"""
