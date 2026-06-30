#include <iostream>
using namespace std;
int print(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<i<<" ";
    
    return print(i+1,n);
}
int main ()
{
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    print(1,n);
    cout<<endl;
    return 0;
}