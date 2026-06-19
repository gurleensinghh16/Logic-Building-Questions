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

    //Sorting 0s and 1s
    int count0=0,count1=0;
    for(auto x : arr){
        if(x==0) count0+=1;
        else count1+=1;
    }
    int i=0;
    while(i<count0){
        arr[i]=0;
        i++;
    }
    while(i<n){
        arr[i]=1;
        i++;
    }

    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}