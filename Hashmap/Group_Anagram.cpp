#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    string arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting string :
    for(int i=0;i<n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    // Inserting inside Hashmap :
    unordered_map <string,int> mp1;
    for(int i=0;i<n;i++){
        mp1[arr[i]]++;
    }
    // Printing Groups :
    cout<<"Groups are : "<<endl;
    for(auto x : mp1){
       for(int i=1;i<=x.second;i++){
        cout<<x.first<<" ";
       }
       cout<<endl;
    }
    cout<<endl;
    return 0;
}