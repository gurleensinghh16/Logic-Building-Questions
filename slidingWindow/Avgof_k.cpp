#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements isnide array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k : ";
    cin>>k;
    // Slinding window :- Finding average of every window : 
    vector <double> ans;
    int left=0,right=k;
    double avg=0;
    for(int i=0;i<k;i++){
        avg+=arr[i];
    }
    ans.push_back(avg/k);
    while(right<n){
        avg=avg-arr[left]+arr[right];
        left++;
        right++;
        ans.push_back(avg/k);
    }
    cout<<"All window average are : ";
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}