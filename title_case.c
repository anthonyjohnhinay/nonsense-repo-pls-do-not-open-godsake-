#include <stdio.h>
#include <ctype.h>

/*
Title case program in C without the <string.h> library
*/
int main(){
    char x[100];
    
    printf("Enter a sentence: ");
    fgets(x, 100, stdin);
    
    for(int i=0;i<100;i++){
        /*
        checks if the given array is in the start
        if not, it checks if the given array is
        has space.
        */
        if(i==0){
            
            // if the letter is small then it subtracts to 32 to get upper equivalent.
            if(x[i] >= 97 && x[i] <=122){
                x[i] = x[i] - 32;
            }
        }
        if(isspace(x[i])!=0){
        
            // subtracts the next letter upon the space value.
            if(x[i+1] >= 97 && x[i+1] <=122){
                x[i+1] = x[i+1] - 32;
            }
        }
    }
    printf("Modified Sentence: ");
    
    /*
    loops the array and if array is matched
    on null value it terminates as fgets
    naturally add null at the end.
    */
    
      for(int j=0;j<100;j++){
          if(x[j] == '\0'){
              break;
          }
          printf("%c", x[j]);
    }
    return 0;
}
