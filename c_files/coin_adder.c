
/*
random code dump 12/14/22

Varibles used: 

lim (limit for row), arr (array), total (coin value * qty), coins (qty coins)
loops : i, x set to 0

*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int lim, coins=0;
    float total=0;
    printf("how many coins do you want to enter: ");
    scanf("%d",&lim);
    
    // malloc is used as counterpart for new in C 
    float **arr = malloc(lim*sizeof(float *));
    
    // creates 2 collumns per row by allocating 2 in malloc
    for(int i=0;i<lim;i++){
        arr[i] = malloc(2 * sizeof(float));
        
        printf("enter the coin value and quantity in row %d: ", i+1);
        scanf("%f %f", &arr[i][0], &arr[i][1]);
      
    //loops all to add the coins inside the 2-dimensional array 
    }
    for(int x=0;x<lim;x++){
       total += arr[x][0] * arr[x][1];
       coins += arr[x][0];
    }
    printf("Total number of coins is %d\nYou have php. %.2f", coins, total);
    
    
    //freeing the memory
    for(int e=0;e<lim;e++){
        free(arr[e]);
    }
    free(arr);
    
    
}
