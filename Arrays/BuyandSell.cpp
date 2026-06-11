#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Finding best time
    vector <int> vec;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            vec.push_back(arr[j]-arr[i]);
        }
    }
    int max=vec[0];
    for(int i=0;i<vec.size();i++){
        if(vec[i]>max){
            max=vec[i];
        }
    }
    cout<<"The best profit can be made is :"<<max<<endl;
    return 0;
}