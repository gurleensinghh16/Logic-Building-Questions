#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the aray : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Largest element
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest element inside array is : \n"<<max<<endl;
    return 0;
}