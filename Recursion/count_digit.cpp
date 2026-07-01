#include <iostream>
using namespace std;
int countt=0;
void count(int n){
    if(n==0){
        return ;
    }
    countt++;
    count(n/10);
}
int main ()
{
    int n;
    cout<<"Enter Digit : ";
    cin>>n;
    if(n==0){
        cout<<"Total digits are 1 "<<endl;
    }
    else{
    count(n);
    cout<<"Total Digits are : "<<countt<<endl;
    }
    return 0;
}