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

    int low=0,high=n-1,mid;
    vector <int> vec;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]){
            vec.push_back(arr[mid]);
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            high=mid;
        }
    }
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}