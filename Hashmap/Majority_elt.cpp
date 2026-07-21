#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp1;
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // inserting inside hashmap :
    for(int i=0;i<n;i++){
        mp1[arr[i]]++;
    }
    // Finding majority :
    for(auto x : mp1){
        if(x.second>n/2){
            cout<<"Majority element found : "<<x.first<<endl;
            break;
        }
    }
    return 0;
}