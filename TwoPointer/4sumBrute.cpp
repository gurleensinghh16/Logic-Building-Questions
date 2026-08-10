#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter elements inside array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target : ";
    cin>>target;
    bool found=false;
    // Finding 4Sum :
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        cout<<"Tagrget found : "<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"+"<<arr[l];
                        found=true;
                        break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found) break;
    }
    if(!found){
        cout<<"Target doesnot exist : ";
    }
    cout<<endl;
    return 0;
}