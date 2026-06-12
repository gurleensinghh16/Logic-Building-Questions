#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a Sentence :"<<endl;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(i==str.size()-1){
            cout<<"Length is : "<<i+1<<endl;
            break;
        }
    }
    return 0;
}