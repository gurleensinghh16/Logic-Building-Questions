#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cout<<"Enter size of the array :";
    cin>>n;
    int arr[n];
    bool done=false;
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> vec;
    for(auto x : arr){
        vec.push_back(x);
    }
    
    
    // Finding kth element
    cout<<"Enter the kth element :";
    cin>>k;
    if(k>n){
        cout<<"No element exist like that :"<<endl;
        done=true;
    }
    if(!done){
    int i=0;
    int max;
    while(i<k){
    max=vec[0];
    int check=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>max){
            max=vec[i];
            check=i;
        }
    }
    i++;
    vec.erase(vec.begin()+check);
}
cout<<"The "<<k<<"th largest element is :"<<max<<endl;
    }
    return 0;
}