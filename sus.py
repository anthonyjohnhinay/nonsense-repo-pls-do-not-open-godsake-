import os
from getpass import getpass as gp
db = {}
def account():
    print('+'*20)
    print('welcome to account creation [!]')
    print('+'*20)
    name = str(input('Please input your name: '))
    pin = str(input('Your 4 digit pin: '))
    if len(pin) != 4:
        print("[!] Pin must be consist of 4 not less than or bigger")
        account()
    else:
        print('[!] Succesfully created account')
        db[pin] = name
        main()
def bank():
    name = db[pin]
    print('='*20)
    print(f'[!] Welcome {name}')
    print('='*20)
    
def main():
    os.system('clear')
    print('='*20)
    print('welccome to the bank!')
    print('='*20)
    val = gp("pin: ")
    if val not in db:
        print("do u want to create account?\n[yes / no]")
        chk = str(input('==> '))
        if chk == 'y':
            account()
    else:
        bank()
main()
