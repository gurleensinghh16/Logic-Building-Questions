#include <iostream>
using namespace std;
int ans=1;
void power(int n,int pow){
    if(pow==0){
        return;
    }
    ans*=n;
    power(n,pow-1);
}
int main ()
{
    int n,pow;
    cout<<"Enter number and power : ";
    cin>>n>>pow;
    power(n,pow);
    cout<<n<<" power "<<pow<<" is : "<<ans<<endl;
    return 0;
}