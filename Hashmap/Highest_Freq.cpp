#include <iostream>
using namespace std;
int main ()
{
    int n,high=0,elt;
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
    // Printing elemnets inside Hashmap:
    for(auto x : mp){
        if(x.second>high){
            high=x.second;
            elt=x.first;
        }
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    cout<<"Highest frequency elt is : "<<elt<<endl;
    return 0;
}