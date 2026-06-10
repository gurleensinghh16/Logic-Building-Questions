#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Ente the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Checking majority element :
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int count=1;
        while(arr[i]==arr[1+1]){
            count++;
            if(count>n/2){
                cout<<arr[i]<<" is the majority element : "<<endl;
                break;
            }
        }
        if(count>n/2){
                break;
            }
    }
    return 0;
}