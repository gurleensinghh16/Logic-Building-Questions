#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    bool found=false;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp1;
    cout<<"Enter k element : ";
    cin>>k;
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Inserting elements inside hashmap : 
    for(int i=0;i<n;i++){
        mp1[arr[i]]=i;
    }
    int st;
    for(int i=0;i<n;i++){
        st=arr[i]+2;
        if(mp1.find(st)!=mp1.end()){
            cout<<"indexes are"<<" "<<i<<" "<<mp1.find(st)->second<<endl;
        }
    }
    return 0;
}