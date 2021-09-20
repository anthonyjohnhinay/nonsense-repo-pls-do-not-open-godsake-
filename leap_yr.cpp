//test leap year fuck cpp
#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout << "enter a date: "; cin >> x;
    cout << "num: "; cin >> y;
    for (int n=0; n<y; n++){
        // to iterate all i increment x by 1
        x++;
        // validation if yr is leap or not
        if (x % 4 == 0){
            cout << x << " leap yr" << endl;
            if (x % 100 == 0){
                if (x % 400 == 0){
                    cout << x << " leap yr" << endl;
                    
                }
            }
        }
        else{
            cout << x << " not a leap yr"<< endl;
        }
    }
} 
