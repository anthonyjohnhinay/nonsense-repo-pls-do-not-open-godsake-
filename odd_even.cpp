#include <iostream>
using namespace std;
int main(){
    int n=50, arr[n];
    for(int i=1; i<=n; i++){
        arr[i]=i;
    }
    // even number checker
    cout<<"even numbers:  \n";
     for(int i=1; i<=n; i++){
       if(arr[i]%2==0){
           cout<<arr[i]<<" "<<endl;
       }
   
    }
    // checks for odd number 
    cout<<"odd numbers:  \n";
     for(int i=1; i<=n; i++){
       if(arr[i]%2){
           cout<<arr[i]<<" "<<endl;
       }
     }
    
}
