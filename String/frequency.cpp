#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        int count=0;
        if(str[i+1]!=str[i]){
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<"Frequenncy of "<<str[i]<<" is :"<<count<<endl;
    }
    }
    return 0;
}