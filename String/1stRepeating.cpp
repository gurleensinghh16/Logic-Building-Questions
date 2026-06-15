#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    cout<<"Enter a sentence :";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        int count=0;
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                count+=1;
            }
        }
        if(count>1){
            ans+=str[i];
        }
    }
    for(auto x: str){
        if(ans.find(x)!=string :: npos){
            cout<<"The first repeating char is : "<<x<<endl;
            break;
        }
    }
    return 0;
}