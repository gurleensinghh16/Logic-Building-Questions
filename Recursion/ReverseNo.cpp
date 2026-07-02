#include <iostream>
using namespace std;
int countt=0;
int reverse(int n){
    if(n==0){
        return 0;
    }
    countt=(countt*10)+(n%10);
    return reverse(n/10);
}
int main ()
{
    int n;
    cout<<"Enter a Digit :";
    cin>>n;
    reverse(n);
    if(n==0) cout<<"Reversed Number is : "<<0<<endl;
    else cout<<"Reversed Value is :"<<countt<<endl;
    return 0;
}