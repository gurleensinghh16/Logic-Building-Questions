#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Rotate by 1
    int temp=arr[n-1];
   for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
   }
   arr[0]=temp;
   cout<<"Elements inside array is : \n";
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}