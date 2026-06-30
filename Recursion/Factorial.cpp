#include <iostream>
using namespace std;
int fac=1;
void fact(int n){
    if(n==1) return ;
    fac*=n;
    fact(n-1);
}
int main ()
{
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    fact(n);
    cout<<"Factorial is : "<<fac<<endl;
    return 0;
}