#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    bool found=false;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    unordered_map <int,int> mp1;
    cout<<"Enter target element : ";
    cin>>target;
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Inserting elements inside hashmap : 
    for(int i=0;i<n;i++){
        mp1[arr[i]]=i;
    }
    int st;
    // Finding Pair
    for(int i=0;i<n;i++){
        st=target-arr[i];
        if(mp1.find(st)!=mp1.end()){
            cout<<i<<" "<<mp1.find(st)->second;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Sum doesn't exist : ";
    }
    cout<<endl;
    return 0;
}