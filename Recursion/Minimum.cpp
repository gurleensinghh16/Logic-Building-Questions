#include <iostream>
using namespace std;
void min(int arr[],int n,int i=0,int minn=INT_MAX){
    if(i==n){
    cout<<"The minimum element is : "<<minn;
        return;
    }
    if(arr[i]<minn){
        minn=arr[i];
    }
    min(arr,n,i+1,minn);
}
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min(arr,n);
    cout<<endl;
    return 0;
}