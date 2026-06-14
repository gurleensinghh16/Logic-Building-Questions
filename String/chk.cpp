#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of strings: ";
    cin>>n;
    string s[n];
    cout<<"enter the strings: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    string s1=s[0];
    string s2=s[n-1];
    string ans="";
    cout<<"the longest common prefix is: ";
    for(int i=0;i<min(s1.length(),s2.length());i++){
        if(s1[i]==s2[i]){
            ans+=s1[i];
        }
    }
    if(ans==""){
            cout<<"none";
        }
        else{
            cout<<ans;
        }

    return 0;
}