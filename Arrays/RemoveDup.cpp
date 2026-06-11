#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :\n";
    cin>>n;
    int arr[n];
    vector <int> vec;
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Removing Duplicates
    int i=0;
    int count=0;
    while(i<n-1){
        if(arr[i]!=arr[i+1]){
            vec.push_back(arr[i]);
            count+=1;
        }
        i++;
    }
    if(arr[n-2]!=arr[n-1]){
        vec.push_back(arr[n-1]);
        count++;
    }
    if(vec.empty()){
        vec.push_back(arr[i]);
        count++;
    }
    
    cout<<"Array without duplicate is  : "<<endl;
    for(int i=0;i<count;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}