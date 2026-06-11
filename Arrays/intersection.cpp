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
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            bool found=false;
            if(arr1[i]==arr2[j]){
                for(int k=0;k<vec.size();k++){
                    if(arr2[j]==vec[k]){
                        found=true;
                        break;
                    }
            }
                }
                if(!found && arr1[i]==arr2[j]){
                vec.push_back(arr2[j]);
            }
            
        }
    }
    cout<<"Intersecting elements are :";
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}