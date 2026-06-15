#include <iostream>
using namespace std;
int main ()
{
    string str,ans;
    cout<<"Enter a sentence :";
    getline(cin,str);
    int max=0;
    for(int i=0;i<str.size();i++){
        int count =0;
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                count+=1;
            }
        }
        if(count>max){
        max=count;
        ans=str[i];
        }
    }
    cout<<"The Most frequent char is : "<<ans<<endl;
    return 0;
}