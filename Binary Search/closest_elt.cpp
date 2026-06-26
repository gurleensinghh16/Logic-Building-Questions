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
    int target,ans2,ans;
    cout<<"Enter the target element to find floor : ";
    cin>>target;

    bool found=false,anss=false;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            ans=arr[mid];
            found=true;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        if(target-arr[low] == arr[high]-target){
            ans2=arr[high];
            ans=arr[low];
            anss=true;
            break;
        }
        else if(target-arr[low]>arr[high]-target){
            ans=arr[high];
            found=true;
        }
        else{
            ans=arr[low];
            found=true;
        }
        }
        if(!anss){
    if(!found){
        cout<<"Element does not exist inside array :"<<endl;
    }
    else{
        cout<<"The closest element is : "<<ans<<endl;
    }
}
else{
    cout<<"The closest element is : "<<ans2<<" "<<ans<<endl;
}
    return 0;
}