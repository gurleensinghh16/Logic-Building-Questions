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
    int ans=INT_MAX;
    while(low<=high){
        if(target==0){
            cout<<"Insertion index is : "<<0<<endl;
            break;
        }
        mid=(low+high)/2;
        if(arr[mid]==target){
            ans=mid;
            found=true;
            break;
        }
        else if(arr[mid]>target){
            if(arr[mid]<ans){
                ans=mid;
                found=true;
            }
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(!found and target!=0){
        cout<<"Insertion index is :"<<n<<endl;
    }
    else if(found){
        cout<<"Insertion index is : "<<ans<<endl;
    }   
    return 0;
}