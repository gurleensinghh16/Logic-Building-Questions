#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    //checking palindrome :
    int i=0,j=str.size()-1;
    bool pal=true;
    while(i<j){
        if(str[i]!=str[j]){
            pal=false;
            break;
        }
        i++;
        j--;
    }
    if(!pal){
        cout<<"Not Palindrome : ";
    }
    else{
        cout<<"Palindrome : ";
    }
    cout<<endl;
    return 0;
}