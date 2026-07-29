#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Reversing array :
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"Reversed Array is : ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}