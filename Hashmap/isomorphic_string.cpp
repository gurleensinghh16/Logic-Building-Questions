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
    // inserting inside hashmap :
    for(int i=0;i<str1.size();i++){
        mp1[str1[i]]++;
    }
    for(int i=0;i<str1.size();i++){
        mp2[str2[i]]++;
    }
    return 0;
}