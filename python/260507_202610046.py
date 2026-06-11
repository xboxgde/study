def coffee(menu, price) :
    global money # coffee 함수 밖에 있는 money 변수를 가져옴
    if money >= price:

        money -= price
        print(f"{menu} 구매\n")
        print(f"잔액 : {money}")

    else :
        print("금액 부족")
        print(f"잔액 : {money}\n")

        money += int(input("추가 금액 입력 :"))


money = int(input("money : "))

print("==메뉴==")
print("1. 아메리카노(1500)")
print("2. 카페라뗴(2200)")
print("3. 카푸치노(2700)")
print("4. 종료")
print("=======")

while True :
    num = int(input("menu : "))

    if num == 1:
        coffee('아메리카노', 1500)

    elif num == 2:
        coffee('카페라뗴', 2200)

    elif num == 3:
        coffee('카푸치노', 2700)

    elif num == 4:
        print("종료")
        break
    else :
        print("1 ~ 4 입력\n")
