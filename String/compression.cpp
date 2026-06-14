#include <iostream>
using namespace std;
int main ()
{
    string str;

    cout<<"Enter the string :";
    getline(cin,str);
    int count=1;
    for(int i=0;i<str.size();i++){
        
        if(str[i+1]==str[i]){
            count+=1;
        }
        else{
            cout<<str[i]<<count;
            count=1;
        }
    }
    cout<<endl;
    return 0;
}