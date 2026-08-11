#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elmenets inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter target : ";
    cin>>target;
    bool found=false;
    // Finding 3 sum using TwoPointer :
    int i=0;
    for(i=0;i<n-1;i++){
        int left=i+1,right=n-1;
        if(i>0 and arr[i]==arr[i-1]){
            continue;
        }
        while(left<right){
        if(arr[i]+arr[left]+arr[right]==target){
            found=true;
            cout<<"Elements are : "<<arr[i]<<" "<<arr[left]<<" "<<arr[right];
            break;
        }
        else if(arr[i]+arr[left]+arr[right]<target){
            left++;
        }
        else{
            right--;
        }
       }
       if(found){
        break;
       }
    }
    if(!found){
        cout<<"Target doesnot exist : ";
    }
    cout<<endl;
    return 0;
}