#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Reverse
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"The reverse array is :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}