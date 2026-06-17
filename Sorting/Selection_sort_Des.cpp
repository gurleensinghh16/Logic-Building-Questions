#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Selection sort Descending order
    for(int i=0;i<n;i++){
        int max=arr[i];
        bool found=false;
        int k=0;
        for(int j=i;j<n;j++){
            if(arr[j]>max){
                max=arr[j];
                k=j;
                found=true;
            }
        }
        if(found){
            swap(arr[i],arr[k]);
        }
    }
     
    cout<<"Sorted array is :";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}