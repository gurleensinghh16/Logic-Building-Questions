#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    for(int i=0;i<=s.length()-1;i++){
        int count=0;
        for(int j=0;j<=s.length()-1;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"first non repeating character: "<<s[i];
            break;
        }
        else{
            cout<<"non repeating character";
            break;
        }
    
    }
    return 0;
}