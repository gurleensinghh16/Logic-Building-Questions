#include <iostream>
using namespace std;
int main ()
{
    int n,k,x,count=0;
    cout<<"Enter size of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k : ";
    cin>>k;
    cout<<"Enter value of x : ";
    cin>>x;
    // Sliding window :
    vector <int> ans;
    int left=0,right=k,sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum>x){
            ans.push_back(sum);
            count++;
        }
    while(right<n){
        sum=sum-arr[left]+arr[right];
        if(sum>x){
            ans.push_back(x);
            count++;
        }
        left++;
        right++;
    }
    cout<<"No. of window greater than x are : "<<count<<endl;
    return 0;
}