#include <iostream>
int main()
{
    int x, y;
    std::cout<<"how many damn triangles do u want? \n";
    std::cin>>x;
    for(int i=0;i<=x;++i)
    {
        for(int n =0; n<=i;++n)
        {
            std::cout<<n<<" ";
        }
        std::cout<<"\n";
    }
}
