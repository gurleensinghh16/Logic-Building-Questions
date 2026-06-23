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

    //Binary search
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int target,floor;
    cout<<"Enter the target element to find floor : ";
    cin>>target;

    bool found=false;
    while(low<=high){
        
        if(arr[mid]==target){
            floor=arr[mid];
            found=true;
            break;
        }
        else if(target>arr[mid]){
            low=mid+1;
            mid=(low+high)/2;
        }
        else if(target<arr[mid]){
            high=mid-1;
            mid=(low+high)/2;
        }
        if(arr[mid]<target){
            floor=arr[mid];
            found=true;
        }
    }
    if(!found){
        cout<<"Element does not exist inside array :"<<endl;
    }
    else{
        cout<<"The floor element is : "<<floor<<endl;
    }
    return 0;
}