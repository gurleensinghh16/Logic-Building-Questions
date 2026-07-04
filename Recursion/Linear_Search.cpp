#include <iostream>
using namespace std;
void lin(int arr[],int n,int target,int i=0){
    if(i==n){
        cout<<"Not found :";
        return ;
    }
    if(arr[i]==target){
        cout<<"Element Found at index : "<<i;
        return ;
    }
    lin(arr,n,target,i+1);
}
int main ()
{
    int n,target;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>target;
    lin(arr,n,target);
    cout<<endl;
    return 0;
}