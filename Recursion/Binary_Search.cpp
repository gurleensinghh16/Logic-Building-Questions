#include <iostream>
using namespace std;
void bin(int arr[],int target,int low,int high){
if(low>high){
    cout<<"Element not found : ";
    return ;
}
int mid=(low+high)/2;
if(target==arr[mid]){
    cout<<"Element found at index : "<<mid;
    return ;
}
else if(target>arr[mid]){
    low=mid+1;
}
else if(target<arr[mid]){
    high=mid-1;
}
bin(arr,target,low,high);
}
int main ()
{
    int n,target;
    cout<<"Enter size of array : ";
    cin>>n;
    int low=0,high=n-1;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>target;
    bin(arr,target,low,high);
    cout<<endl;
    return 0;
}