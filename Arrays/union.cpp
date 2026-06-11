#include <iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cout<<"Enter size of 1st array :"<<endl;
    cin>>n1;
    int arr1 [n1];
    cout<<"Enter elements in 1st array :";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter size of 2nd array :"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements in 2nd array :";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    vector <int> vec;
    // Inseting unique elements in vector from 1st array :
    for(int i=0;i<n1;i++){
        bool found=false;
         for(int j=0;j<vec.size();j++){
            if(arr1[i]==vec[j]){
                found=true;
                break;
            }
         }
         if(!found){
            vec.push_back(arr1[i]);
         }
    }

    // Inseting unique elements in vector from 1st array :
    for(int i=0;i<n2;i++){
        bool found=false;
         for(int j=0;j<vec.size();j++){
            if(arr2[i]==vec[j]){
                found=true;
                break;
            }
         }
         if(!found){
            vec.push_back(arr2[i]);
         }
    }
    cout<<"Unique elements are :";
    for(auto x : vec){
        cout<<x<<" ";
        }
    cout<<endl;
    return 0;
}