#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    bool found=false;
    cout<<"Enter Size of  array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target Element : ";
    cin>>target;
    // Finding 3 sum :
    int closest=INT_MAX,diff=0,sum=0,finalsum=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                found=true;
                cout<<"Element found at index : "<<i<<" "<<j<<" "<<k;
                break;
                }
                else{
                    sum=arr[i]+arr[j]+arr[k];
                    if(sum>0){
                        diff=sum-target;
                    }
                    if(sum<0){
                        diff=-(sum-target);
                    }
                    if(diff<closest){
                        finalsum=sum;
                    }
                    closest=min(closest,diff);
                }
            }
            if(found) break;
        }
        if(found) break;
    }
    if(!found){
        cout<<"Closest sum is : "<<finalsum;
    }
    cout<<endl;
    return 0;
}