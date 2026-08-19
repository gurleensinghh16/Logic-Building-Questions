#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k : ";
    cin>>k;
    // Sliding window :
    int left=0,right=k,evenCount=0,maxEvencount=0;
    for(int i=0;i<k;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
    }
    maxEvencount=evenCount;
    while(right<n){
        if(arr[left]%2==0){
            evenCount--;
        }
        if(arr[right]%2==0){
            evenCount++;
        }
        maxEvencount=max(evenCount,maxEvencount);
        left++;
        right++;
    }
    cout<<"Maximum even count is : "<<maxEvencount<<endl;
    return 0;
}