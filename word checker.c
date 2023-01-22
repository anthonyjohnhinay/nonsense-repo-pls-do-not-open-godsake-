#include <stdio.h>
#include <string.h>

/*
returns small words if it is not small else return itself.
*/

char auto_low (char x)
{
  if (x >= 65 && x <= 90){
      return x + 32;
    }
  else{
    return x;
  }
}

int main(){
  int cons, vowel, digit, spec;
  char a[80];
  char vow[5] = { 'a', 'e', 'i', 'o', 'u' };
  fgets(a, 80, stdin);
  
  for (int i = 0; i < strlen (a); i++){
      
      if (auto_low (a[i]) >= 96 && auto_low (a[i]) <= 122){
          
          /*
          checks if the words belong in vowels through second for loop
          if the limit reached, counts the Consonants letter
          */
          for(int j=0;j<5;j++){
              if(auto_low(a[i]) == vow[j]){
                 
                  vowel++;
                  break;
              }
              else if(j>=4){
                  cons++;
              }
          }
      }
      
      /*
      If it is not a word, checks the digits from 0-9 else
      treats as a special characters with the subtraction of 1
      which added naturally by fgets function.
      */
      
      else{
          
          if (auto_low (a[i]) >= 48 && auto_low (a[i]) <= 57){
              digit++;
          }
          else{
              spec++;
          }
          
      }
  }

  printf ("Consonants:%d\nVowel:%d\nDigit:%d\nSpecial Characters:%d\n", cons,
	  vowel, digit, spec-1);
  return 0;
}
