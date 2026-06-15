#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(ans.find(str[i])==string :: npos){
            ans+=str[i];
        }
    }
    cout<<"String after removing Duplicate is: "<<ans<<endl;
    return 0;
}