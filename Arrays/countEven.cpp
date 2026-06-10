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
    // count even
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count+=1;
        }
    }
    cout<<"Total even No. is : "<<count<<endl;
    return 0;
}