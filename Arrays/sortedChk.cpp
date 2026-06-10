#include <iostream>
using namespace std;
int main ()
{
     int n;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the aray : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sorted check
    bool bol=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            bol=false;
            break;
        }
    }
    if(bol){
        cout<<"Sorted : "<<endl;
    }
    else{
        cout<<"Not sorted :"<<endl;
    }
    return 0;
}