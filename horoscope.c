#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define hs 40


char* h_scope(char x[hs]){
    int temp_h;
    char* hello = malloc(6 * sizeof(char));
    
    
    
    char arr_h[hs][hs] = {
        "Aries", "Aquarius", "Taurus", "Gemini" , "Cancer","Capricorn", 
        "Leo" , "Libra", "Virgo",  "Scorpio", "Saguittarius", "Pisces"
    };
    
    char arr_mean[hs][255] = {
        "Aries are always ready for a new adventure", 
        "Aquarius are always thinking outside the box.",
        "Taurus are known for their determination.",
        "Gemini are known for their adaptability.",
        "Cancer are known for their strong intuition.",
        "Capricorn are known for their ambition and practicality.",
        "Leo are known for their confidence and courage",
        "Libra are known for their fairness and diplomacy.",
        "Virgo are known for their hard work and attention to detail.",
        "Scorpio are known for their intensity and passion.",
        "Sagittarius are known for their optimism and sense of adventure.",
        "Pisces are known for their creativity and compassion."
    };
    
    
    
    for(int i=0;i<12;i++){
        if(strcmp(x, arr_h[i])==0){
            temp_h = i;
            strcpy(hello, arr_mean[temp_h]);
            break;
        }
        else if(i>=11){
            strcpy(hello, "Invalid Input.");
            break;
        }
    }
    
    
    
    
    return hello;
    
}
int main(){
    
    char val[hs], dec;
    start:
    printf("Enter your zodiac sign: \n");
    printf("Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio, Saguittarius, Capricorn, Aquarius, Pisces.\n");
    printf("Please note that the input is case sensitive\n");
    scanf("%s", val);
  
    char* res = h_scope(val);
    printf("%s", res);
    free(res);
    printf("\nEnter 'Y' to continue or 'N' to exit: ");
    scanf("%s", &dec);
    
   
    
    if(dec == 'Y'){
        goto start;
    }
    else if (dec== 'N'){
        printf("Exiting the program.\n");
        return 0;
    }
    else{
        printf("Invalid Input.\n");
        goto start;
    }
    
}
