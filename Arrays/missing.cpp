#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    // checking missing number
    for(int i=0;i<n-1;i++){
        if(arr[0]!=1){
            cout<<"Missing number is : 1 "<<endl;
            break;
        }
        if(arr[i+1]!=arr[i]+1){
            cout<<"Missing number is : "<<arr[i]+1<<endl;
            break;
        }
    }
    return 0;
}