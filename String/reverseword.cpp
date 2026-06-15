#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    cout<<"Enter a sentence :";
    getline(cin,str);
    vector<string> vec;

    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            ans+=str[i];
        }
        else{
            vec.push_back(ans);
            ans="";
        }
    }
    vec.push_back(ans);
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}