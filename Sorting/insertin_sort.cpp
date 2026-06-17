#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Insertion sort
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                int k=i;
                while(k!=j){ 
                    swap(arr[k-1],arr[k]);
                    k--;
                }
            }
        }
    }
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}