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
        if(target==arr[mid]){
            found=true;
            break;
        }
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] and target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>=arr[mid] and target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
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