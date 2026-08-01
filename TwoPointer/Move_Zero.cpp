#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Moving Zeroes :
    int i=0,j=0;
    while(i<n){
        if(arr[j]!=0){
            j++;
        }
        else if(i>j and arr[i]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout<<"Array after Moving zero is : ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}