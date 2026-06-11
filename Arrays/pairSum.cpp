#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element :";
    cin>>target;
    // Finding pair
    bool found=false;
    for(int i=0;i<n;i++){
        if(found){
            break;
        }
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                found=true;
                cout<<"Element found is "<<arr[i]<<"+"<<arr[j];
                break;   
            }
        }
    }
    if(!found){
        cout<<"Element not found:";
    }
    cout<<endl;
    return 0;
}