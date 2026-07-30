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
    cout<<"Enter target : ";
    cin>>target;
    bool found=false;
    // Finding pair : 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Pair found at index : "<<i<<" "<<j;
                found=true;
                break;
            }
        }
    }
    if(!found){
        cout<<"Pair doesnot exist : ";
    }
    cout<<endl;
    return 0;
}