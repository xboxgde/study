# 문자열 = ', "(불변 개체, 인덱싱, 슬라이싱)
# '문자열' + '문자열' => 연결
# '문자열' * 숫자 => 반복

"""
a = "h, e, l, l, o"
    
b = a.upper() #대문자로 변경해 복사

print(a)
print(b)

c = a.split(", ") # 문자열 -> 리스트로 변환, 괄호 안에 아무것도 없으면 구분자는 빈칸

print(c)
"""




# 사용자에게 생년월일(06/04/2005)을 입력 받아 출력하는 프로그램

# 결과 화면
"""
생년월일(월/일/년도) 입력 : 03/23/2003
당신의 생일은 2003년 03월 23일 이군요.
"""

"""
birth = input("생년월일(월/일/년도) 입력 : ")

result = birth.split("/")

print(f"당신의 생일은 {result[2]}년 {result[0]}월 {result[1]}일 이군요.")
"""




"""
a = "hello python"

b = a.replace("python", "파이썬") #python을 파이썬으로 교체 (원본 복사)

print(a)
print(b)
"""




# 사용자에게 파일면(확장자 포함)을 입력받아 유효한지 체크하는 프로그램
# 확장자는 .txt와 .py만 가능

# endswith("문자열") : "문자열"로 끝나면 True, 아니면 False
# startswith("문자열") : "문자열"로 시작하면 True, 아니면 False

# 결과 화면
"""
파일명 입력 : text.txt
성공!
"""

# 결과 화면 2
"""
파일명 입력 : text.exe
확장자 확인 필요
"""

"""
while True :
    name = input("파일명 입력 : ")

    if name.endswith(".txt") or name.endswith(".py") :
        print(f"{name} 파일을 엽니다.")
        break
    else :
        print("확장자 확인 필요\n")
"""




# 패스워드를 입력받아 유효성 체크하는 프로그램
# 패스워드는 최소 5자 이상
# 알파벳 1개 이상, 숫자 1개 이상 사용

# 결과 화면
"""
패스워드 입력 : aa11
패스워드 실패
"""

"""
while True :
    pw = input("패스워드 입력 : ")

    if len(pw) >= 5:
        if pw.isalpha() or pw.isdecimal():
            print("패스워드 실패\n")
        elif pw.isalnum() :
            print("패스워드 성공")
            break
        else :
            print("패스워드 실패\n")
    else :
        print("패스워드 실패\n")
"""




# '접착제문자'.join([리스트]) : 리스트 항목을 접착제문자로 이어붙여 문자열로 리턴

"""
a = ['a', 'b', 'c']

b = '/'.join(a)

print(b)
"""




# 아매알울 압력받아 아이디와 도메인을 출력하는 프로그램
# @는 1개만 작성해야함

# 결과 화면
"""
이메일 입력 : test@gmail.com
아이디 : test
도메인 : gmail.com
"""

"""
while True :
    email = input("이메일 입력 : ")

    if email.count("@") == 1 :
        email_split = email.split("@")

        print(f"아이디 : {email_split[0]}")
        print(f"도메인 : {email_split[1]}")
        break
    else :
        print("@는 1개 작성 가능\n")
"""




# 문장을 입력받아 제외하고 싶은 단어를 *** 으로 처리하는 프로그램

# 결과 화면
"""
문장 입력 : i hate python
제외하고 싶은 단어 입력 : hate
i *** python
"""

"""
str_input  = input("문장 입력 : ")
not_str_input = input("제외하고 싶은 단어 입력 : ")

result = str_input.replace(not_str_input, "*" * len(not_str_input))

print(result)
"""
