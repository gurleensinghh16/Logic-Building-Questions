#include <iostream>
using namespace std;
int main ()
{
    int n,low=INT_MAX;
    bool found=false;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp;
    cout<<"Enter elements inside the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Inserting array inside Hashmap
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        if(x.second>1){
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Duplicate doesnot exist : ";
    }
    else{
        cout<<"Duplicate Exist : ";
    }
    cout<<endl;
    return 0;
}