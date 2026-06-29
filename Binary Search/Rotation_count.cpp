#include <iostream>
using namespace std;
int main ()
{
     int n;
    cout<<"Enter size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int low=0,high=n-1,mid,ans;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    cout<<"No. of Rotations are : "<<mid<<endl;
    return 0;
}