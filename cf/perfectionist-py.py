def check_word(word):
    isword_upper = 0
    isword_lower = 0
    for i in word:
        if i.isupper():
            isword_upper += 1
        if i.islower():
            isword_lower += 1
    if isword_lower < isword_upper:
        return word.upper()
    else:
        return word.lower()

a = str(input())
print(check_word(a))
