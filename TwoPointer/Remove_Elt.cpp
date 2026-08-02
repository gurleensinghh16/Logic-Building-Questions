#include <iostream>
using namespace std;
int main ()
{
    int n,value;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to remove : ";
    cin>>value;
    // Removing element :
    int i=0,j=0;
    while(i<n){
        if(arr[j]!=value){
            j++;
        }
        else if(i>j && arr[i]!=value){
            swap(arr[i],arr[j]);
        }
        else{
            i++;
        }
    }
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}