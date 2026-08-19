#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k : ";
    cin>>k;
    // Sliding window :
    int left=0,right=k,maxSum=0,sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    } // calculates first window :
    maxSum=sum;
    while(right<n){
        sum=sum-arr[left]+arr[right];
        maxSum=max(sum,maxSum);
        left++;
        right++;
    }
    cout<<"Maximum consecutive sum is : "<<maxSum<<endl;
    return 0;
}