#include <iostream>
using namespace std;
int main()
{
    // dynamic array can input as many as you want
    int x;
    cout << "how many num do u want: ";
    cin >> x;
    int *arr = new int(x);
    cout<<"please enter "<<x<<" numbers\n";
    for(int i=0; i<x; i++)
    {
        cout<<"num"<<i<<" ";
        cin>>arr[i];
    }
  // determines the which num is smallest and biggest
    int min = arr[0];
    int big = arr[0];
    for (int i=0; i<x; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    for (int i=0; i<x; i++)
    {
        if(big < arr[i])
        {
            big = arr[i];
        }
        
    }
    cout <<"smallest num in array: "<< min <<endl;
    cout <<"the biggest num in array is: "<<big<<endl;

}
