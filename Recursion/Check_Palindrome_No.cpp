#include <iostream>
using namespace std;
int N,re=0;
bool found=false;
int palindrome(int n){
    if(n==0){
        if(N==re) found=true;
        return 0;
    }
    re=(re*10)+(n%10);
    return palindrome(n/10);
}
int main ()
{
    int n;
    cout<<"Enter Digit : ";
    cin>>n;
    N=n;
    palindrome(n);
    if(found==true){
        cout<<"It is palindrome : ";
    }
    else {
        cout<<"It is not palindrome :";
    }
    cout<<endl;
    return 0;
}