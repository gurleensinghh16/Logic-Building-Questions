#include <iostream>
using namespace std;
int main ()
{
    int m,n;
    cout<<"Enter size of 1st array : ";
    cin>>m;
    cout<<"Enter size of 2nd array : ";
    cin>>n;
    int arr1[m+n],arr2[n];
    cout<<"Enter elements inside 1st array : ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements inside 2nd array : ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    // Merging arrays :
    int i=m-1,j=n-1,k=m+n-1;
    while(i!=-1 and j!=-1){
        if(arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            i--;
            k--;
        }
        else{
            arr1[k]=arr2[j];
            j--;
            k--;
        }
    }
    if(i==-1){
        while(j!=-1){
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }
    cout<<"Sorted array is : ";
    for(auto x : arr1){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}