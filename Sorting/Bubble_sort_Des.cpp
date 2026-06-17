#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Bubble sort
    for(int i=0;i<n-1;i++){
        bool swaped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(!swaped){
            break;
        }
    }
    for(auto x : arr){
        cout<<x<<" ";
        }
        cout<<endl;
    return 0;
}