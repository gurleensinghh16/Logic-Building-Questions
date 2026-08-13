#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter elements inside array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Sorting colors : 
    int left=0,right=n-1,mid=0;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
            left++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[right]);
            right--;
        }
    }
    cout<<"Sorted order is : ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}