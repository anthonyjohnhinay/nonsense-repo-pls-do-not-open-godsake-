#2d array 
"""
Dynamic adding of coins amount and quantity 2d array
"""
arr = []
total = 0

lim = int(input('enter a number: '))
for i in range(lim):
    num = (input(f'enter num {i + 1}: '))
    arr.append([int(x) for x in num.split()])
    
for x in arr:
    total += x[0] * x[1]
    
print(f'total amount is : {total}')
