
def roman_solve(x):
    
    # it can also used [::-1] to start from 1 -1000
    orig = x
    letter = ["M", "CM", "D", "C", "XC", "L", "XL", "X", "IX","V", "IV", "I"]
    roman = ''
    l_num = [1000, 900, 500, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    i=0
    
    while x != 0:
        if x%l_num[i]!=orig:
            if x>=l_num[i]:
                """
                Python uses float in returning value of division,
                using // or floor division, returns the int value only.
                """
                a = x // l_num[i]
                # * for concatinating string
                roman += letter[i]*a
                
                #Gets the remainder to loop until 0.
                x%=l_num[i]  
        i+=1
    return roman
    
print(roman_solve(int(input('Please input a number: '))))
