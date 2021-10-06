#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"num: ";
        cin>>arr[i];
        
    }
  // for checking whether a num in array is low amoomg others 
    int test =arr[0];
      for(int i=0;i<3;i++)
    {
        if (test > arr[i])
        {
            test = arr[i];
            
        }
        
    }
    cout<<"smallest number among 3 is : \n "<<test;
    
    return 0;
}
