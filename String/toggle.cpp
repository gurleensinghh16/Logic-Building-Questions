#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a sentence :";
    getline(cin,str);
    
    for(int i=0;i<str.size();i++){
        char ch1='a';
        char ch2='A';
        while(str[i]!=ch1 && str[i]!=ch2){
            ch1++;
            ch2++;
        }
        if(str[i]==ch1){
                ch1=toupper(ch1);
                str[i]=ch1;
            }
        else if(str[i]==ch2){
                ch2=tolower(ch2);
                str[i]=ch2;
            }
    }
cout<<"Toggle sentence is :"<<str<<endl;
    return 0;
}