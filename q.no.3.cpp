#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"\n enter value of n : ";
    cin>>n;
    
    int i, k, flag = 1;
   
    
    for (i = 1, k = 0; i <= 2 * n - 1; i++) {
       
        if (i < n - k)
            cout << "  ";
 
        
        else {
            if (flag)
                cout << " * ";
            else
                cout << "  ";
 
            flag = 1 - flag;
        }
 
        
        if (i == n + k) {
            k++;
            cout << endl;
 
            
            if (i == 2 * n - 1)
                break;
 
            
            i = 0;
            flag = 1;
        }
    }
    return 0;
}
