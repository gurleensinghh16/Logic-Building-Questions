#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter size of  array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>target;
    // Sliding window :
    int left=0,right=0,sum=0,currentLength,MaxLength=INT_MIN;
    for(right=0;right<n;right++){
        sum+=arr[right];
        while(sum>=target){
            currentLength=right-left+1;
            MaxLength=max(MaxLength,currentLength);
            sum-=arr[left];
            left++;
        }
    }
    cout<<"Minimum length is : "<<MaxLength<<endl;
    return 0;
}