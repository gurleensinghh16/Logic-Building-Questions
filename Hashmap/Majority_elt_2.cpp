#include <iostream>
#include <unordered_map>
using namespace std;
int main ()
{
    int n;
    bool found=false;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp1;
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Inserting in Hashmap :
    for(int i=0;i<n;i++){
        mp1[arr[i]]++;
    }
    // Finding Majority :
    for(auto x : mp1){
        if(x.second>n/3){
            cout<<"Majority element is : "<<x.first<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"No majority element exist : "<<endl;
    }
    return 0;
}