# 시퀀스 - index 있음(순서가 있다.) -> 인덱싱/슬라이싱 가능

# 리스트 - [] 수정 가능 -> 함수가 다양하다
# 튜플 - (),괄호 생략 가능,  수정 불가능 -> 함수 index(), count() 만 존재

# 리스트 <-> 튜플 변환 가능
# list(), tuple()

"""
a = [1, 2, 3, 4, 5]
b = (1, 4, 7, 2, 5)
c = list(b) # 튜플 ->  리스트
c.sort()

print(b)
print(c)

d = tuple(c) # 리스트 -> 튜플

print(d)
"""




#패킹(packing), 언패킹(unpacking)

#a = (1, 2, 3) # 패킹

#(b, c, d) = a # 언패킹




"""
def add(a, b) :
    c = a + b
    return a, b, c # 튜플로 1개 리턴

n1, n2, n3 = add(10, 20) # 언패킹

print(n1)
print(n2)
print(n3)
"""




# 원본 튜플을 활용하여 다음과 같이 출력하는 프로그램

# 결과 화면
"""
원본 : (5, 2, 7, 11, 20, 3, 8)
오름차순 정렬 : 2, 3, 5, 7 ... 20

"""

"""
a = (5, 2, 7, 11, 20, 3, 8)

b = list(a)

b.sort()

print(f"원본 : {a}")

print(f"오름차순 정렬 : ", end="")

for i in b :
    print(i, end = " ")
"""




# 원본 리스트(20 ~30 사이 10개 발생)를 활용하여 다음과 같이 출력하는 프로그램

# 결과 화면
"""
원본 리스트 : [21, 30, 19... 23]

숫자(20~30) 입력 : 35
20 ~ 30 사이만 입력 가능

숫자(20~30) 입력 : 25
25는 총 x개 있습니다.

25 이상 항목은 삭제합니다.
결과 리스트(총 x개) : [21, 20, 23, 24...]
"""

"""
import random as r

a = []

for i in range(10) :
    a.append(r.randint(20, 30))

print(f"원본 리스트 : {a}")

while True :
    num = int(input("\n숫자(20~30) 입력 : "))

    if 20 <= num <= 30 :
        counts = a.count(num)
        print(f"{num}은(는) 총 {counts}개 있습니다.")

        print("\n25 이상 항목은 삭제합니다.")
        b = [ i for i in a if i < 25]
        b.sort()
        print(f"결과 리스트(총 {len(b)}개) : {b}")

        break
    else :
        print("20 ~ 30 사이만 입력 가능")
        continue
"""




# 로또(1 ~ 45, 6개 숫자 ) 프로그램

# 결과 화면
"""
로또 번호 입니다.
1 1 4 7 30 45


"""

"""
import random as r

lotto = []

for i in range(6) :
    lotto.append(r.randint(1, 45))

lotto.sort()
print("로또 번호입니다.")

for i in lotto:
    print(i, end=" ")
"""




# 로또(1 ~ 45, 6개 숫자 ) 프로그램 (중복 x, 오름차순 정렬)



"""
import random as r

lotto = []

for i in range(1, 46) :
    lotto.append(i)

r.shuffle(lotto) # 리스트 lotto 황목 위치 변경(랜덤 섞기)

lotto2 = lotto[:6] # 슬라이싱 추출(0 부터 5번까지 추출)

print("로또 번호입니다.")

lotto2.sort()
for i in lotto2:
    print(i, end=" ")
"""




# 세트 (set) - {}, 집합 관련, 중복 제거, 순서 없음
# 딕셔너리 (dict) - {}, key:value 형태

"""
a = {1, 2, 3, 4, 5} # 세트
b = {'a':10, 'b':20, 'c':30} # 딕셔너리

print(a)
print(b)

c = set() # 빈 세트
d = dict() # 빈 딕셔너리

a.add(10) # 세트 항목 추가 

print(a)
"""




# 로또(1 ~ 45, 6개 숫자 ) 프로그램 (중복 x, set 사용, 오름차순 정렬)

import random as r

lotto = set()

while len(lotto) < 6 :
    lotto.add(r.randint(1, 45))

lotto2 = list(lotto)
lotto2.sort()
print("로또 번호입니다.")

for i in lotto2:
    print(i, end=" ")




