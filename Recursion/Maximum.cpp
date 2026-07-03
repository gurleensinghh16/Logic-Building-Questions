#include <iostream>
using namespace std;
void max(int arr[],int n,int i=0,int maxx=INT_MIN){
    if(i==n){
    cout<<"The maximum element is : "<<maxx;
        return;
    }
    if(arr[i]>maxx){
        maxx=arr[i];
    }
    max(arr,n,i+1,maxx);
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
    max(arr,n);
    cout<<endl;
    return 0;
}