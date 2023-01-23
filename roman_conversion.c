/*

Date : 1/22/23 - 1/23/23

*/
#include <stdio.h>
#include <string.h>

#define rc 12
#define roman_s 40

void roman_solve(int x){
    /*
    Uses array to map the equivalent character of the specific
    number.  
    */
    char letter[rc][rc] = {
        "M", "CM", "D", "C", "XC", "L", "XL", "X", "IX","V", "IV", "I"
    };
    
    /*
    Equivalent value of the roman number on letter variable.
    */
    int a, orig=x, i=0, l_num[rc] = {
        1000, 900, 500, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };
    
    
    printf("\nRoman letter of %d is: ", orig);
 
    while(x!=0){
        /*
        Using modulo, the number is checked if it is NOT equal to the original number
        since the number lesser than the modulus results to original value.
        */
        if(x%l_num[i]!=orig){
            /*
            If the number is greater than original then it proceed to divide (a)
            to determine the frequency of letter i.e the I,II,IV's
            */
            if(x>=l_num[i]){
                a = x / l_num[i];
               
                for(int j=0;j<a;j++){
                    printf("%s", letter[i]);
                }
                
                /*
                Gets the remainder part to loop until 0 value
                */
                
                x %= l_num[i];
            }
        }
        i++;
     
    }
   
    
}
int main(){
    int a;
    printf("Please enter a number to convert in roman numerals: ");
    scanf("%d", &a);
    roman_solve(a);
    return 0;
}
