#include <iostream>
using namespace std;
int main ()
{
    string str1,str2;
    cout<<"Enter 1st string : ";
    cin>>str1;
    cout<<"Enter 2nd string : ";
    cin>>str2;
    unordered_map <char,int> mp1;
    unordered_map <char,int> mp2;
    //Inserting string inside Hashmap :
    for(int i=0;i<str1.size();i++){
        mp1[str1[i]]++;
    }
    for(int i=0;i<str2.size();i++){
        mp2[str2[i]]++;
    }
    // Checking :
    if(mp1==mp2){
        cout<<"Valid Anagram : ";
    }
    else{
        cout<<"Not valid Anagaram : ";
    }
    cout<<endl;
    return 0;
}