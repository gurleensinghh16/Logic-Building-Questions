#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    cout<<"Enter a sentence :";
    getline(cin,str);
    vector <string> vec;

    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            sort(ans.begin(),ans.end());
            vec.push_back(ans);
            ans="";
        }
        else{
            ans+=str[i];
        }
    }
    vec.push_back(ans);
    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++){
        if(vec[i]==vec[i+1]){
            cout<<vec[i]<<" ";
        }
        else{
            cout<<vec[i]<<endl;
        }
    }
    
    return 0;
}