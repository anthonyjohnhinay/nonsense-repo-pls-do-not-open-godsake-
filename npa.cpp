#include <iostream>
using namespace std;
int main(){
    int x, y, mult;
    cout << "multiply: ";
    cin >> x; 
    cout << "multiply 2: ";
    cin >> y;
    mult = x * y;
    cout << "answer " << mult;
    if (mult < 10){
        cout << "less";
    }
    else{
        cout << "more";
    }

}