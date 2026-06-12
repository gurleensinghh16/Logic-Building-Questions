#include <iostream>
using namespace std;
int main ()
{
   string str;
   cout<<"Enter a sentence :";
   getline(cin,str);
   int alp=0,spec=0,digit=0;
   for(int i=0;i<str.size();i++){
    char ch1='!',ch2='A',ch3='a';
    char k='9';
    while(str[i]!=ch1 and str[i]!=ch2 and str[i]!=ch3 and str[i]!=k){
        ch1++;
        ch2++;
        ch3++;
        k--;
    }
    if(str[i]==ch1 ){
        spec++;
    }
    else if(str[i]==ch2 || str[i]==ch3){
        alp++;
    }
    else if(str[i]==k ){
        digit++;
    }
   }
   cout<<"Special : "<<spec<<endl;
   cout<<"Alphabets : "<<alp<<endl;
   cout<<"Digits : "<<digit<<endl;
    return 0;
}