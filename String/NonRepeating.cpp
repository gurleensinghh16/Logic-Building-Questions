#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    int ans2;
    cout<<"Enter a sentence :";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        int count=0;
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                count+=1;
                ans2=i;
            }
        }
        if(count==1){
            ans+=str[i];
            break;
        }
    }
    for(auto x: str){
        if(ans.find(x)!=string :: npos){
            cout<<"The first Non repeating char is : "<<x<<endl<<" at index : "<<ans2<<endl;
            break;
        }
    }
    return 0;
}