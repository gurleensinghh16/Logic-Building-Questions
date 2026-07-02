#include <iostream>
using namespace std;
int i=0,j;
bool found=true;
void palindrome(string str){

    if(found==false) return ;
    j=str.size()-i-1;
    if(i>j) return;
    if(str[i]!=str[j]){
        found=false;
    }
    i++;
    
    palindrome(str);
}
int main ()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    palindrome(str);
    if(found){
        cout<<"It is palindrome : ";
    }
    else{
        cout<<"It is not palindrome : ";
    }
    cout<<endl;
    return 0;
}