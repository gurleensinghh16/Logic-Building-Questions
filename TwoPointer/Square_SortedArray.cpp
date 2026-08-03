#include <iostream>
using namespace std;
int sqr(int n){
    return n*n;
}
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Sorting array in sqaured form :
    vector <int> ans(n);
    int i=0,j=n-1,k=n-1;
    while(i<=j){
        if(sqr(arr[j])>sqr(arr[i])){
            ans[k]=sqr(arr[j]);
            k--;
            j--;
        }
        else{
            ans[k]=sqr(arr[i]);
            k--;
            i++;
        }
    }
    cout<<"Final array is : ";
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}