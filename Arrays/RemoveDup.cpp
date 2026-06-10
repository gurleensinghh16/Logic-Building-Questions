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
    // Removing Duplicates
    int i=0;
    int j=0;
    while(i<n-1){
        if(arr[i]==arr[i+1]){
            arr[j]=arr[i];
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return 0;
}