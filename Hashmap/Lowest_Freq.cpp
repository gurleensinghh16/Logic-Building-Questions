#include <iostream>
using namespace std;
int main ()
{
    int n,low=INT_MAX;
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
        if(mp[x.first]<low){
            low=x.second;
        }
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    cout<<"Lowest frequency elt is : "<<low<<endl;
    return 0;
}