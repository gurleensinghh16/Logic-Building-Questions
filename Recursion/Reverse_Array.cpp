#include <iostream>
using namespace std;
void print(int n,int arr[]){
    if(n==0) return;
    cout<<arr[n-1]<<" ";
    print(n-1,arr);
}
int main (){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reverse array is : ";
    print(n,arr);
    cout<<endl;
    return 0;
}