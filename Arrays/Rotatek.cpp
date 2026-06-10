#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter how many time you want to rotate array : \n";
    cin>>k;
    
    // Rotate by k
    int i=1;
    while(i<=k){
    int temp=arr[n-1];
   for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
   }
   arr[0]=temp;
   i++;
}
 cout<<"Elements inside array is : \n";
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}