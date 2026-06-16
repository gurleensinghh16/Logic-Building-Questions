#include <iostream>
using namespace std;
int main ()
{
    string str,str2;
    cout<<"Enter a sentence :";
    cin>>str;
    str2=str;
    string ans1,ans2;

    int k=0;
    while(k<str.size()){
    bool found1=true;
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            found1=false;
            break;
        }
        i++;
        j--;
    }
    if(found1){
        if(str.size()>ans1.size()){
            ans1=str;
        }
    }
    str.pop_back();
    k++;
}


    k=0;
    while(k<str2.size()){
    bool found2=true;
    int i=0,j=str2.size()-1;
    while(i<j){
        if(str2[i]!=str2[j]){
            found2=false;
            break;
        }
        i++;
        j--;
    }
    if(found2){
        if(str2.size()>ans2.size()){
            ans2=str2;
        }
    }
    str2.erase(0,1);
    k++;
}

if(ans1.size()>ans2.size()){
    cout<<"Longest Palindrome substring is : "<<ans1<<endl;
}
else{
    cout<<"Longest Palindrome substring is : "<<ans2<<endl;
}
    return 0;
}