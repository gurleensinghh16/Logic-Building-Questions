#include <iostream>
using namespace std;
int summ=0;
void sum(int n){
    if(n==0) return ;
    summ+=n;
    sum(n-1);
}
int main ()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    sum(n);
    cout<<"Total sum is : "<<summ<<endl;
    return 0;
}