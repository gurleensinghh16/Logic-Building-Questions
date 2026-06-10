#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int r;
    cout<<"Enter the number of time you want to rotate the array: ";
    cin>>r;
    int choice;
    cout<<"Enter 1 to rotate the array to the left and 2 to rotate the array to the right: ";
    cin>>choice;

    if(choice==1){
        
            r=r%n;
    
        for(int i=0; i<r; i++){
            int temp=arr[0];
            for(int j=0; j<=n-2; j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
    }
    else if(choice==2){
        
            r=r%n;
        
        for(int i=0; i<r; i++){
            int temp=arr[n-1];
            for(int j=n-1; j>0; j--){
                arr[j]=arr[j-1];
            }
            arr[0]=temp;
        }
    }
    else{
        cout<<"Invalid choice!";
        return 0;
    }

    cout<<"rotated array is: ";
    for(int i=0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}