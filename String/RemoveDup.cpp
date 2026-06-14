#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter the sentence:";
    cin>>str;
    string ans;
    sort(str.begin(),str.end());
    for(int i=0;i<str.size()-1;i++){
        if(str[i+1]!=str[i]){
            ans+=str[i];
        }
    }
    if(str[str.size()-1]!=str[str.size()-2]){
        ans+=str[str.size()-1];
    }
    cout<<"String After removing Duplicate is :"<<ans<<endl;
    return 0;
}