#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    bool found=false;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target Element : ";
    cin>>target;
    // Finding 3 sum :
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                found=true;
                cout<<"Element found at index : "<<i<<" "<<j<<" "<<k;
                break;
                }
            }
            if(found) break;
        }
        if(found) break;
    }
    if(!found){
        cout<<"Target Doesnot exist in array : ";
    }
    cout<<endl;
    return 0;
}