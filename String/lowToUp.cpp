#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter the sentence :";
    getline(cin,str);
    
    for(int i=0;i<str.size();i++){
        char ch='a';
        while(str[i]!=ch){
            ch++;
        }
        ch=toupper(ch);
        str[i]=ch;
      }
      cout<<"The converted String is :"<<str<<endl;
    return 0;
}