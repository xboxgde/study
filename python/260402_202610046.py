# 0 ~ 100점 사이 입력하여 합격(60점 이상) 여부 확인 프로그램
#중첩 if 활용

# 걀과 화면
"""
점수 입력 : 65
65점은 합격입니다.
"""

# 걀과 화면 2
"""
점수 입력 : 200
0 ~ 100 사이만 입력 가능
"""

"""
score = int(input("점수 입력 : "))

if (score >= 0 and score <= 100) :

    if (score >= 60)  :
        print(f"{score}점은 합격 입니다.")

    else :
        print(f"{score}점은 불합격 입니다.")

else :
    print("0 ~ 100 사이만 입력 가능")
"""




# 랜덤 발생 방법

"""
import random # 랜덤 함수 사용을 위한 추가.

rand = random.randint(1, 10) # 1 ~ 10 사이 랜덤 값 발생하여 변수에 대입.

print("내일의 운세")
print(f"당신의 점수는 {rand}점 입니다.")
"""




# 로또 프로그램
# 1 ~ 45 사이 6개 숫자 맞추기

"""
import random as r

rand1 = r.randint(1, 45)
rand2 = r.randint(1, 45)
rand3 = r.randint(1, 45)
rand4 = r.randint(1, 45)
rand5 = r.randint(1, 45)
rand6 = r.randint(1, 45)

print("이번주 로또 번호")
print(rand1, rand2, rand3, rand4, rand5, rand6)
"""




# 주사위 (1 ~ 6) 2개를 던져 출력.

# 결과 화면
#(5, 3)

"""
import random as r

d1 = r.randint(1, 6)
d2 = r.randint(1, 6)


if (d1 == d2) :

    print(f"({d1},{d2}) - 같음")

else :
    print(f"({d1},{d2}) - 다름")
"""




# 2자리(10 ~ 99) 숫자 맞추는 게임 (20 ~ 198)

# 결과 화면
"""
50 + 25 = 75
정답입니다.
"""

"""
import random as r

rand1 = r.randint(10, 99)
rand2 = r.randint(10, 99)
result = rand1 + rand2


num = int(input(f"{rand1} + {rand2} = "))

if 20 <= num <= 198 :
    if num == result :
        print("정답입니다.")

    else :
        print("틀렸습니다.")
        
else :
    print("범위 벗어남. (20 ~ 198)")
"""




# 0 ~ 100점 사이 점수 3개를 발생하여 재응시 여부 확인 프로그램
# 1개라도 50점 미만일 경우 "재응시(50점미만)"
# 3개 점수가 모두 50점 이상, 평균이 70점 이상이면 "통과"
# 아니면 "재응시(평균이하)"

# 결과 화면
"""
점수1: 80점
점수2: 45점
점수3: 100점

재응시(50점 미만) 입니다.
"""

"""
import random as r

score1 = r.randint(0, 100)
score2 = r.randint(0, 100)
score3 = r.randint(0, 100)

num = (score1 + score2 + score3) / 3

print(f"점수1 : {score1:3}점")
print(f"점수2 : {score2:3}점")
print(f"점수3 : {score3:3}점")

if score1 >= 50 and score2 >= 50 and score3 >= 50 :
    if num >= 70:
        print("\n통과 입니다.")

    else :
        print("\n재응시(평균 이하) 입니다.")

else :
    print("\n재응시(50점 미만) 입니다.")
"""




# 배송료 계산 프로그램
# 배송지 : kr, us, jp

#배송료
"""
kr : 3500 (5만원 이상 구매시 무료)
us : 100000 (15만원 이상 구매시 무료)
jp : 70000 (10만원 이상 구매시 무료)
"""

# 결과 화면
"""
배송지 입력 : kr 
제품 가격 입력 : 1000
제품 수량 입력 : 8

배송지는 'kr'이고, 제품 가격(배송지 제와)은 8000원 입니다.
배송료 포함 11500원 입니다.
"""

"""
country = input("베송지 입력 : ")
price = int(input("제품 가격 입력 : "))
count = int(input("제품 개수 입력 : "))

sum1 = price * count

if country == 'kr' or country == 'us' or country == 'jp' :
    
    if country == 'kr' and sum1 < 50000 :
        result = sum1 + 3500


    elif country == 'us' and sum1 < 150000 :
        result = sum1 + 100000


    elif country == 'jp' and sum1 < 100000 :
        result = sum1 + 70000

    else :
        result = sum1

else :
    print("\n배송지 범위 오류")

print(f"\n배송지는\'{country}\'이고, 제품 가격(배송지 제외)은 {sum1}원 입니다.")
print(f"배송료 포함 {result}원 입니다.")
"""




# 주사위 (1 ~ 6) 3개를 던져 합합 값이 12이상인지 아닌지 확인
# 모두 같은 숫자인지 확인하는 프로그램

# 결과 화면
"""
(1,1,1) - 모두 같음
"""

# 결과 화면
"""
(1,1,1) - 12 미만
"""

# 결과 화면
"""
(1,1,1) - 12 이상
"""

import random as r

d1 = r.randint(1, 6)
d2 = r.randint(1, 6)
d3 = r.randint(1, 6)

if d1 + d2 + d3 >= 12 :
    print(f"({d1},{d2},{d3}) - 12 이상")

elif d1 == d2 and d1 == d3 :
    print(f"({d1},{d2},{d3}) - 모두 같음")

else :
    print(f"({d1},{d2},{d3}) - 12 미만")
