#include <iostream>
using namespace std;
void chk(int arr[],int n,int i=0){
    if(i+1==n){
        cout<<"Array is sorted : ";
        return ;
    }
    if(arr[i+1]<arr[i]){
        cout<<"Array is not sorted : ";
        return ;
    }
    chk(arr,n,i+1);
}
int main (){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    chk(arr,n);
    cout<<endl;
    return 0;
}