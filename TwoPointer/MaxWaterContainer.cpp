#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"No. of containers : ";
    cin>>n;
    int arr[n];
    cout<<"Enter heights of containers : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Finding container :
    int area,width,maxArea=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            width=j-i;
            area=min(arr[i],arr[j])*width;
            maxArea=max(area,maxArea);
        }
    }
    cout<<"Maximum area is : "<<maxArea<<endl;
    return 0;
}