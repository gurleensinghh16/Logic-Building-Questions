#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a sentence :";
    getline(cin,str);
    int i=0,count=1;
    while(i<str.size()){
        if(str[i+1]==' '){
            count++;
        }
        i++;
    }
    cout<<"No. of words are :"<<count<<endl;
    return 0;
}