#include <iostream>
using namespace std;
int main ()
{
     int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> vec;
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
            product*=arr[j];
            }
        }
         vec.push_back(product);
    }
    cout<<"The product of array except itself is :";
    for(auto x : vec){
        cout<<x<<" ";
    }
    return 0;
}