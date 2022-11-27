#include <iostream>
using namespace std;

/*
random code dump 9/27/22

Counting coins
variables needed : limit, coins_total(coins), total_value(total)

*/
int main(){
    int lim, coins=0;
    double total=0;
    
    cout <<"how many limit";
    cin >> lim;
    
    double **row = new double*[lim];
    
    
    for(int i=0;i<lim;i++){
        row[i] = new double[2];
    }
    cout <<"Enter your coins:\n ";
    for(int x=0;x<lim;x++){
        cin >> row[x][0]>>row[x][1];
    }
    
    //summing all coins
    for(int j=0;j<lim;j++){
        coins += row[j][1];
        total += row[j][0] * row[j][1];
    }
    cout <<"Your "<<coins<<" coins is Php"<< total;

}
