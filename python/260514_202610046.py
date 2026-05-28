# 시퀀스 : 리스트, 튜플, 문자열

# 양수 index : 맨 앞이 0
# 음수 index : 맨 뒤가 -1

# 인덱싱 - a[2]

#슬라이싱
"""
일반 - a[시작 : 끝(포함 x)]
고급 - a[시작 : 끝(포함x) : step]
"""

# 리스트 - [], 삭제&삽입&변경 등 가능

"""
a = [1, 2, 3, 4, 5]
b = []
c = list()

print(a[2]) #인덱싱
print(a[1:4:2]) #슬라이싱
"""

#리스트 연산
"""
append(value) :  리스트 항목 끝에 value 추가 
insert(index, value) : index 번호에 value 추가 
pop(index) : index번호 항목 삭제 ( 기본값 -1,  )
remove(value) : value 값 삭제 

index(value) : value값을 찾아 해당 index 리턴
count(value) : value값이 몇개 있는지 리턴

reverse() : 역출력
sort() : 정렬 ( 오름차순 )
sort(reverse = True) : ( 내림차순 )
"""

"""
a = [10, 20, 'apple', [1, 2, 3], 100]
print(a)

a.apppend(200)
a.apppend('banana')
print(a)

a.insert(1, 30)
print(a)

a.pop(3)
a.remove(100)

print(a)

print(a.index('apple'))
print(a.count('apple'))

a.reverse()
print(a)
"""

"""
a = [5, 3. 2, 1. 6. 8]

a.sort(reverse = True)
print(a)
"""

#시퀀스에서 활용 가능한 내장함수
"""
len(시퀀스) : 항목의 수
max(시퀀스) : 최대값
min(시퀀스) : 최소값
sum(시퀀스) : 총합
"""

a = [1, 40, 22, 65, 21]

a.sort(reverse = True)

print(f"1st : {a[0]}")
print(f"2nd : {a[1]}")
print(f"last : {a[-1]}")

print(f"sum : {sum(a)}")
print(f"avg : {asum(a)/len(a):.1f}")








