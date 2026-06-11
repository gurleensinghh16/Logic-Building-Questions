#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!=arr[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]){
                    count+=1;
                }
            }
            cout<<"Frequency of "<<arr[i]<<" is : "<<count<<endl;
        }
    }
    int cnt=0;
    if(arr[n-1]!=arr[n-2]){
        for(int j=0;j<n;j++){
            if(arr[n-1]==arr[j]){
                cnt++;
            }
        }
        cout<<"Frequency of "<<arr[n-1]<<" is : "<<cnt<<endl;
    }
    return 0;
}