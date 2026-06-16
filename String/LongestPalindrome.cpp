#include <iostream>
using namespace std;
int main ()
{
    string str,str2;
    cout<<"Enter a sentence :";
    cin>>str;
    str2=str;
    string ans;
    
    for(int l=0;l<str.size();l++){
        for(int k=l;k<str.size();k++){
            
        string test=str.substr(l,k+1);
        int i=0,j=test.size()-1;
            bool found1=true;
        while(i<j){
        if(test[i]!=test[j]){
            found1=false;
            break;
        }
        i++;
        j--;
    }
    if(found1){
        if(test.size()>ans.size()){
            ans=test;
        }
    }
 }
    }
if(ans==""){
    cout<<"There is no Palindrome Substring :"<<endl;
}
else{
    cout<<"The longest substring is : "<<ans<<endl;
}
return 0;
}