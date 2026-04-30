# 중간고사
# 학번 : 202610046
# 이름 : 윤정용




# 1번
"""
dan = int(input("단(2 ~ 9) 입력 : "))

if 2 <= dan <= 9 :
    print(f"=== {dan}단 ===")
    for i in range(1, 10) :
        print(f"{dan} * {i} = {dan * i:2}")
else :
    print("2 ~ 9 사이 숫자만 입력 가능 합니다.")
"""

# 2번
"""
import random as r

n1 = r.randint(10,40)
n2 = r.randint(10,40)

print("랜덤 숫자 2개를 발생합니다.")
print(f"n1 = {n1}, n2 = {n2}")

if n1 > n2 :
    print("")
    print(f"{n1} / {n2} = {n1 / n2:.1f}")
    print(f"{n1} % {n2} = {n1 % n2}")
else :
    print("계산오류!")
"""
# 3번
"""
result = 0
for i in range(1, 100) :
    for k in range(i+1, i + 2, 1) :
        if i == 99 :
            print(f"{i}/{k} = ", end="")
        else :
            print(f"{i}/{k} + ", end="")
        result = result + (i / k)
print(f"{result:.2f}")
"""


# 4번


num1 = int(input("상품 가격 입력 :"))
num2 = int(input("상품 개수 입력 :"))
num3 = float(input("할인율(%) 입력 :"))

sum1 = (num1 * num2)

sum2 = 1 - (num3 / 100)

result_sum =  sum1 * sum2
print(f"\n총 금액은 {result_sum}원 입니다")
print(sum2)
num4 = int(input("\n받은 금액 입력 :"))
result = num4 - result_sum

print(f"거스름돈은 {result}원 입니다.")







