#include <iostream>
using namespace std;
int main ()
{
    int n1,n2,n3;
    cout<<"Enter size of 1st 2nd and 3rd array : ";
    cin>>n1>>n2>>n3;
    int arr1[n1];
    int arr2[n1];
    int arr3[n3];

    unordered_map <int,int> mp1;
    unordered_map <int,int> mp2;
    unordered_map <int,int> mp3;

    // Inserting elements inside 1st array :
    cout<<"Enter elements in 1st array : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    // Inserting elements inside 2st array :
    cout<<"Enter elements in 2nd array : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    // Inserting elements inside 3st array :
    cout<<"Enter elements in 3rd array : ";
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    // Inserting elements inside 1st Hashmap :
    for(int i=0;i<n1;i++){
        mp1[arr1[i]]++;
    }
    // Inserting elements inside 2st Hashmap :
    for(int i=0;i<n2;i++){
        mp2[arr2[i]]++;
    }
    // Inserting elements inside 3st Hashmap :
    for(int i=0;i<n3;i++){
        mp3[arr3[i]]++;
    }
    // Finding common elements :
    cout<<"Common elements are : ";
    for(auto x : mp1){
        if(mp2.find(x.first)!=mp2.end()){
            if(mp3.find(x.first)!=mp3.end()){
                cout<<x.first<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}