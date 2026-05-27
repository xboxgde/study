# 리스트 함축
# [ 수식 for 변수 in 시퀀스 ]
# [ 수식 for 변수 in 시퀀스 if 조건식 ]
# [ 수식 if 조건식 else 0 for 변수 in 시퀀스 ]

"""
a = [6, 3, 1,8, 4, 2]
b = [i if i % 2 == 0 else 0 for i in a ]


b = []
for i in a :
    if i % 2 == 0 :
        b.append(i)
    else :
        b.append(0)


print(a)
print(b)
"""




# 0 ~ 100점 사이 랜덤 10개를 발생하여 리스트 score에 추가하여 사용
# 홀수 점수만 새로운 리스트 score2에 추가하여 출력



# 결과 화면
"""
원본 : [90, 20, 34, 2, 1, 67 ...]
결과 : [1, 67 ...]
짝수 점수는 x명 입니다.
평균 이상 점수만 출력합니다.
평균 : xx.x점
"""

"""
import random as r

score = []

for i in range(10) :
    score.append(r.randint(0,100))

score2 = [i for i in score if i % 2 != 0]

print(f"원본 : {score}")
print(f"결과 : {score2}")

print(f"짝수 점수는 {len(score)}명 입니다")
print("\n평균 이상 점수만 출력합니다.")

avg = sum(score) / len(score)

print(f"평균 : {avg:.1f}")

score3 = [i if i >= avg else 0 for i in score ]

score3.sort()
print(score3)
"""




# 랜덤 활용
# choice(seq) : 시퀀스에서 랜덤으로 1개 항목 리턴
# sample(seq, 2) : 시퀀스에서 n개 랜덤으로 추출하여 [리스트]로 리턴
# shuffle(seq) : 원본 변경

"""
import random as r

a = ["aa", "bb", "cc", "dd"] 

print(r.choice(a))
print(r.sample(a,2))

print(a)
r.shuffle(a)
print(a)
"""




# 과일 리스트 a 에서 제외하고 싶은 과일을 입력받아 삭제하고,
# 남은 과일에서 2개를 추천 받아 출력하는 프로그램

# 결과 화면
"""
원본 과일 리스트 : ['사과', '오렌지', '바나나', '키위', '참외', '수박']

제외 하고 싶은 과일 입력 : 키위
제외 후 과일 리스트 : ['사과', '오렌지', '바나나', '참외', '수박']

과일 2개 '사과', '바나나' 를 추천합니다.
"""

"""
import random as r

a = ['사과', '오렌지', '바나나', '키위', '참외', '수박']

print(f"원본 과일 리스트 : {a}")

user = input("\n제외 하고 싶은 과일 입력: ")

a.remove(user)
print(f"제외 후 과일 리스트 : {a}")

b = r.sample(a,2)

print(f"\n과일 2개 '{b[0]}', '{b[1]}'를 추천합니다.")
"""




# 5명의 학생 점수를 입력받아 리스트 score에 추가하여
# 평균 이상 학생들의 점수를 출력하는 프로그램을 작성하시오.

# 점수는 0~100점만 입력한다고 가정하고 작성
# 평균은 소수점 1자리로 출력
# 평균 이상의 학생 점수는 오름차순 정렬하여 출력

# >> 결과화면 <<
"""
학생1 점수 입력: 70
학생2 점수 입력: 90
학생3 점수 입력: 30
학생4 점수 입력: 55
학생5 점수 입력: 71

학생들의 점수를 출력합니다.
[70, 90, 30, 55, 71]
평균: 63.2점

평균 이상의 학생 점수를 출력합니다.
[70, 71, 90]

평균 미만 학생수는 2명 입니다.
"""

"""
student = []
for i in range(5) :
    user = int(input(f"학생{i+1} 점수 입력 :"))
    student.append(user)

print(f"\n학생들의 점수를 출력합니다.")
print(student)
avg = sum(student) / len(student)
print(f"평균 : {avg:.1f}점")

print("평균 이상의 학생 점수를 출력합니다.")
up_student = [i for i in student if i >= avg]

up_student.sort()

print(up_student)

down_student = [i for i in student if i <= avg]
print(f"\n평균 미만 학생수는 {len(down_student)}명 입니다.")
"""




# 10 ~ 30 10개 랜던 발생하여 리스트 a에 추가하여 사용
# 최대값과 최소값을 삭제하고 내림차순하여 출력

# 결과 화면
"""
원본 : [21, 10, ... 29]
최대값 : 29
최소값 : 10

최대값과 최소값을 삭제합니다.
결과 : [21, .... x]
"""

import random as r
a = []
for i in range(10) :
    rand = r.randint(10, 30)
    a.append(rand)

print(f"원본 : {a}")
print(f"최대값 : {max(a)}")
print(f"최소값 : {min(a)}")

result = [i for i in a if i != max(a) and i != min(a)]

print("\n최대값과 최소값을 삭제합니다.")
result.sort(reverse = True)
print(f"결과 : {result}")
