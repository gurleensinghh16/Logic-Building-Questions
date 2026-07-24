#include <iostream>
using namespace std;
int main ()
{
    string str,str2;
    cout<<"Enter a string : ";
    getline(cin,str);
    unordered_map <char,int> mp1;
    //Entering inside Hashmap :
    for(int i=0;i<str.size();i++){
        mp1[str[i]]++;
    }
    // Checking elements :
    while(!mp1.empty()){
        int count=0;
        char elt;
        for(auto x : mp1){
            if(x.second>count){
                count=x.second;
                elt=x.first;
            }
        }
        for(int i=0;i<count;i++){
            str2+=elt;
        }
        mp1.erase(elt);
    }
    for(auto x : str2){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}