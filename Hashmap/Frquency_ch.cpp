#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;
    char arr[str.size()];
    unordered_map <char,int> mp;
    for(int i=0;i<str.size();i++){
        arr[i]=str[i];
    }
    // Inserting array inside Hashmap
    for(int i=0;i<str.size();i++){
        mp[arr[i]]++;
    }
    // Printing elemnets inside Hashmap:
    for(auto x : mp){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    return 0;
}