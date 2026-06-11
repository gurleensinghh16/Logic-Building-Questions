#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int j=0;
     for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            arr[++j]=arr[i];  
        }
     }
     cout<<"array is: ";
     for(int j=0;j<=arr[j];j++){
        cout<<arr[j]<<" ";
     }
     return 0;
}