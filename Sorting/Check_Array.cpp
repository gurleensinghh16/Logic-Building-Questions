#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Checking
    bool sort;
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] and arr[i]<=arr[i+1]){
            sort=true;
        }
        else{
            sort=false;
            break;
        }
    }
    if(n==1){
        sort=true;
    }
    if(n>1 and n<=2){
        if(arr[1]>=arr[0]){
            sort=true;
        }
        else{
            sort=false;
        }
    }
    if(!sort){
        cout<<"Array is not sorted :"<<endl;
    }
    else{
        cout<<"Array is sorted :"<<endl;
    }
    return 0;
}