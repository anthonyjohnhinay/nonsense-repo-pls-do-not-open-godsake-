# own answer in luhn's alogorithm

def check_luhn(num):
    num = list(str(num))
    luhn,norm = 0,0

    for i,n in enumerate(num):
        if i!=0:
            if i % 2!=0:
                num[i] = int(num[i])*2
                luhn = luhn + ((num[i]//10) +(num[i]%10))
            else:
                norm += int(num[i])
        else:
            norm += int(num[i])         
    if (norm+luhn)%10==0:
        return True
    return False
  
print(check_luhn(a))

