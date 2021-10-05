#include <iostream>
using namespace std;
bool palindrone(int x)
{
  // reverses the num 
    int reverse_num = 0,temp = x, digit;
    while(x>0)
    {
      digit=(x%10);  
      reverse_num = (reverse_num*10) +digit;
      x = x / 10;
    }
  // this will check whether the number palindrome or not 
    if(temp == reverse_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// for inputting a number 
int main()
{
    int x;
    cin>>x;
    if(palindrone(x))
    {
        cout<<x<<" is a palindrone";
    }
    else
    {
        cout<< x <<" is NOT a palindrone";
    }
}
