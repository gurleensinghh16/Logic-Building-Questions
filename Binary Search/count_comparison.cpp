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
    int target,count=0;
    cout<<"Enter the target element : ";
    cin>>target;

    bool found=false;
    while(low<=high){
        count++;
        if(arr[mid]==target){
            cout<<"Element found at index : "<<mid<<endl;
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
    }
    if(!found){
        cout<<"Element does not exist inside array :"<<endl;
    }
    cout<<"The count is : "<<count<<endl;
    return 0;
}