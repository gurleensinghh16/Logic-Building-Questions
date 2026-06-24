#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements isnide the aray : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>target;
    int low=0,high=n-1,mid;
    bool found=false;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            found=true;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(!found){
        cout<<"Target Doesn't exist :"<<endl;
    }
    else{
        cout<<"Element found at index: "<<mid<<endl;
    }   
    return 0;
}