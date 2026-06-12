#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a sentence :";
    getline(cin,str);
    int i=0;
    int j=str.size()-1;
    bool bol=true;
    while(i<j){
        if(str[i]!=str[j]){
            bol=false;
            break;
        }
        i++;
        j--;
    }
    if(!bol){
        cout<<"The string is not palindrome :"<<endl;
    }
    else{
        cout<<"The string is palindrome :";
    }
    return 0;
}