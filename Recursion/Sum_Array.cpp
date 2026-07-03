#include <iostream>
using namespace std;
void print(int arr[],int n,int i=0,int sum=0){
 if(i==n){
    cout<<sum;
    return ;
 } 
 print(arr,n,i+1,sum+=arr[i]);
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
    cout<<"Sum of array is : ";
    print(arr,n);
    cout<<endl;
    return 0;
}