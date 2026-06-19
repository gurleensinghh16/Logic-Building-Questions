#include <iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cout<<"Enter size of 1st and 2nd array :";
    cin>>n1;
    cin>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter elements inside 1st array :";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements inside 2st array :";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector <int> vec;

    //Merging sorted arrays
    int i=0,j=0;
    while(vec.size()!=n1+n2){
        if(arr1[i]>arr2[j]){
            vec.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            vec.push_back(arr1[i]);
            i++;
        }
        else{
            vec.push_back(arr1[i]);
            i++;
        }
        if(i==n1 || j==n2){
            break;
        }
    }
    if(i==n1){
    while(j<n2){
        vec.push_back(arr2[j]);
        j++;
    }
}
    else{
        while(i<n1){
            vec.push_back(arr1[i]);
            i++;
        }
    }
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}