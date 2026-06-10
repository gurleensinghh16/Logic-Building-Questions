#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Moving 
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos++;
        }
    }
    for(int i=pos;i<n;i++){
        arr[i]=0;
    }
    // Printing array :
    cout<<"Elements inside array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}