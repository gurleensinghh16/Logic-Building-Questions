#include <iostream>
using namespace std;
int main ()
{
    bool bol;
    string str1;
    string str2;
    cout<<"Enter string 1:"<<endl;
    cin>>str1;
    cout<<"Enter string 2:"<<endl;
    cin>>str2;
    if(str1.size()!=str2.size()){
        cout<<"It is not Anagram :"<<endl;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.size();i++){
        if(str1[i]!=str2[i]){
            break;
            cout<<"It is not Anagram :";
        }
        else{
             bol=true;
        }
    }
    if(bol){
        cout<<"It is a valid Anagram:"<<endl;
    }
    return 0;
}