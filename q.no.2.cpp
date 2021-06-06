#include <iostream>
using namespace std;

int main() 
{
    int size, first=-1, last=-1, num;
    cout<<"\n enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\n enter sorted array (in ascending order) : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n enter element you want to find : ";
    cin>>num;
    
        for (int i = 0; i < size; i++) {
            if (num != arr[i])
                continue;
            if (first == -1)
                first = i+1;
            last = i+1;
        }
        if (first != -1) {
            cout<<"\n First Occurrence = " << first;
            cout<<"\n Last Occurrence = " << last;
        }
        else
            cout<<"\n Not Found";
    
    return 0;
}
