#include <iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cout<<"Enter the size of 1st and 2nd array :";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter elements inside 1st array :";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements inside 2nd array :";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    //Relative sorting acording to 2nd array :
    vector <int> vec;
    // for(auto x : arr2){
    //     vec.push_back(x);
    // }
   for(int i=0;i<n2;i++){
    for(int j=0;j<n1;j++){
        if(arr2[i]==arr1[j]){
            vec.push_back(arr1[j]);
        }
    }
   }
   for(int i=0;i<n1;i++){
   auto it=find(vec.begin(),vec.end(),arr1[i]);
    if(it == vec.end()){
        vec.push_back(arr1[i]);
    }
   }
   for(auto x : vec){
    cout<<x<<" ";
   }
   cout<<endl;

    return 0;
}