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
    int target,first,last;
    cout<<"Enter the target element : ";
    cin>>target;

    bool found=false;
    while(low<=high){
        if(arr[mid]==target){
            found=true;
            first=mid;
            high=mid-1;
            mid=(low+high)/2;
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
    int i=first;
    while(i<n and arr[i]==target){
        last=i;
        i++;
    }
    
    if(!found){
        cout<<"Element does not exist inside array :"<<endl;
    }
    else if(found){
        cout<<"Total No. of occurenece are  : "<<last-first+1<<endl;
    }
    return 0;
}