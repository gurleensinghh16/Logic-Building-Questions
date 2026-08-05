#include <iostream>
using namespace std;
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
    cout<<"Enter the target element : ";
    cin>>target;
    // Finding sum :
    int i=0,j=n-1;
    bool found=false;
    while(i<n){
        if(arr[i]+arr[j]==target){
            cout<<"The elements are : "<<arr[i]<<" + "<<arr[j]<<" : "<<arr[i]+arr[j];
            found=true;
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i--;
        }
    }
    if(!found){
        cout<<"Element does not exist : ";
    }
    cout<<endl;
    return 0;
}