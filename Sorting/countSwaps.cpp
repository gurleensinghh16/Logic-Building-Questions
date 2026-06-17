#include <iostream>
using namespace std;
int main ()
{
    int n,count=0;
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
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count+=1;
                swaped=true;
            }
        }
        if(!swaped){
            break;
        }
    }
    cout<<"Total Swaps are : "<<count;
        cout<<endl;
    return 0;
}