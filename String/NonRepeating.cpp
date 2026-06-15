#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a sentence :";
    getline(cin,str);
    int i=0;
    int count=1;
    while(i<str.size()){
        if(str[i+1]!=str[i] && count==1){
            cout<<"The first non repeating number is : "<<str[i];
            break;
        }
        else if(str[i+1]!=str[i] && count!=1){
            count=1;
        }
        else{
            count++;
        }
        i++;
    }
    cout<<endl;
    return 0;
}