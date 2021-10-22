import os
bool = True
bank = 100
pin = 1234
while bool:
    print("="*20)
    print("[1] Withdraw amount")
    print("[2] Deposit amount")
    print("[3] Inquire balance amount")
    print("[4] quit")
    print('[5 Change Pin')
    print("="*20)
    a = int(input('-> '))
    if a == 1:
        cpin = int(input("your pin: "))
        if cpin==pin:
            money = int(input("amount: "))
            if money > bank:
                print('cannot Withdraw')
            else:
                bank -= money
            print(f"your acquired money is {bank}")
        else:
            print('failed')
       
    if a == 4:
        print('+'*20)
        print("you quitted the service.")
        print('+'*20)
        break
    if a== 3:
        cpin = int(input('pin: ')) 
        if cpin == pin:
            print("+"*20)
            print(f"Balance: {bank}")
            print("+"*20)
        else:
            print('failed')
    if a==5:
        print("+"*20)
        pin = int(input('change pin: '))
        print("+"*20)
        os.system('clear')
