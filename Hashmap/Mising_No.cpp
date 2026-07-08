#include <iostream>
#include <map>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    map <int,int> mp;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // Finding No.
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<"The missing Number is : "<<i<<endl;
            break;
        }
    }
    return 0;
}