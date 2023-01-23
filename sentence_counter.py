
def word_t(sentence, first, second):
    words = sentence.split()
    try:
        f1 = words.index(first)
        f2 = words.index(second)
        
        len_word = words[f1+1:f2]
        print(f"The distance between {first} and {second} is {len(len_word)}")
        print(f"{len_word}")
    except:
        print('Word not found')

   
   
    
a = str(input('Enter a sentence: '))
b = str(input('Enter a first word: '))
c = str(input('Enter a second word: '))

word_t(a,b,c)
