#include <iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>target;
    sort(arr,arr+n);
    vector<vector<int>> ans;
    vector<int> triplet;
    // Finding 4Sum :
    int i=0,j=i+1,left=j+1,right=n-1;
    long long sum=0;
    for(i=0;i<n;i++){
        if(i>0 and arr[i]==arr[i-1]){ // checking duplicate for i :
            continue;
        }
        for(j=i+1;j<n;j++){
            if(j>i+1 and arr[j]==arr[j-1]){ // checking duplicate for j :
                continue;
            }
            left=j+1,right=n-1;
            while(left<right){
                sum=1LL *arr[i]+arr[j]+arr[left]+arr[right]; 
                if(sum==target){
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[left]);
                    triplet.push_back(arr[right]);
                    left++;
                    right--;

                    ans.push_back(triplet);
                    triplet.clear();
                    while(left<right and arr[left]==arr[left-1]){ // checking duplicate for left
                        left++;
                    }
                    while(left<right and arr[right]==arr[right+1]){ // checking duplicate for right
                        right--;
                    }
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    cout<<"All pairs are : "<<endl;
    for(auto x : ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}