#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Removing Duplicates :
    int i=0,j=i+1;
    while(i<n){
        if(arr[i]>arr[j-1]){
            arr[j]=arr[i];
            j++;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<"Final array is : ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}