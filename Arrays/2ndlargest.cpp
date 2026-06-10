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
    //2nd largest
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if(max==max2){
            max2=arr[i+1];
        }
        if(arr[i]>max2 and arr[i]<max){
            max2=arr[i];
        }
    }
    cout<<"The 2nd largest element inside array is : \n"<<max2<<endl;
    return 0;
}