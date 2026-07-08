#include <iostream>
#include <map>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    vector <int> ans;
    unordered_map <int,int> mp;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // Inserting in Hashmap
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // Inserting inside vector
    for(int i=1;i<=max;i++){
        if(mp[i]==0){
            ans.push_back(i);
        }
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}