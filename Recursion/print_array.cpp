#include <iostream>
using namespace std;
void print(int arr[],int n,int i=0){
 if(i==n) return;
 cout<<arr[i]<<" ";
 print(arr,n,i+1);
}
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside tha array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    cout<<endl;
    return 0;
}