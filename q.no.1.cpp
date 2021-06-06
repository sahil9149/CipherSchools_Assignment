#include <iostream>
using namespace std;

int main() 
{
    int x, origx, rem, result=0;
    cout<<"\n enter a 4 digit number : ";
    cin>>x;
    origx=x;
    while(origx !=0)
    {
        rem=origx%10;
        result+=rem*rem*rem*rem;
        origx=origx/10;
    }
    if(result==x)
    {
        cout<<"\n YES... "<<x<<" is armstrong";
    }
    else{
        cout<<"\n"<<x<<" is not armstrong";
    }
    return 0;
}
