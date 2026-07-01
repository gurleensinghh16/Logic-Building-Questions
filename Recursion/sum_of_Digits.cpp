#include <iostream>
using namespace std;
int summ=0;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
int main ()
{
    int n;
    cout<<"Enter the Digits : ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}