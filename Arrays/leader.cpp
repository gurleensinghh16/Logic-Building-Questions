#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    vector <int> leader;
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Finding leader:
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i] ){
                if(j==n-1){
                leader.push_back(arr[i]);
                
                }
            }
            else{
                break;
            }
        }
    }
    leader.push_back(arr[n-1]);
    cout<<"Leader elements are : "<<endl;
    for(auto x  : leader){
        cout<<x<<" "; 
    }
    cout<<endl;
    return 0;
}