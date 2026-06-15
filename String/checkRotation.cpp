#include <iostream>
using namespace std;
int main ()
{
    string str1,str2;
    cout<<"Enter 1st string :";
    cin>>str1;
    cout<<"Enter 2st string :";
    cin>>str2;
    bool found=false;

    int i=0;
    while(i<str1.size()){
    char temp=str1[str1.size()-1];
    for(int i=str1.size()-1;i>0;i--){
        str1[i]=str1[i-1];
    }
    str1[0]=temp;
    if(str1==str2){
        found=true;
        break;
    }
    i++;
    }
    if(!found){
        cout<<"It is not rotation of another string :"<<endl;
    }
    else{
        cout<<"It is rotation of another string :"<<endl;
    }
    cout<<str1<<endl;
    return 0;
}