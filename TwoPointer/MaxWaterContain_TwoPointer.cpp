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
    int i=0,j=n-1;
    int area,width,height=0,maxArea=0;
   while(i<j){
    width=j-i;
    height=min(arr[i],arr[j]);
    area=height*width;
    maxArea=max(area,maxArea);
    if(arr[i]<arr[j]){
        i++;
    }
    else{
        j--;
    }
   }
    cout<<"Maximum area is : "<<maxArea<<endl;
    return 0;
}
// Two Pointer :