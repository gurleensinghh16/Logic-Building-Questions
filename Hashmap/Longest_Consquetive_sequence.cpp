#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp1;
    // Inserting elements in array : 
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Inserting inside Hashmap :
    for(int i=0;i<n;i++){
        mp1[arr[i]];
    }
    // Finding sequence :
    int maxlength=INT_MIN,currentlength=1;
    for(auto x : mp1){
        if(mp1.find(x.first-1)!=mp1.end()){
            continue;
        }
        int current=x.first;
        while(mp1.find(current+1)!=mp1.end()){
            currentlength++;
            current++;
        }
        maxlength=max(maxlength,currentlength);
    }
    cout<<"The maximum Sequence is : "<<maxlength<<endl;
    return 0;
}