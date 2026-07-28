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
    for(int i=0;i<str2.size();i++){
        mp2[str2[i]]++;
    }
    vector <int> vec1;
    vector <int> vec2;
    //inserting hashmap count in arr :
    for(auto x : mp1){
        vec1.push_back(x.second);
    }
    for(auto x : mp2){
        vec2.push_back(x.second);
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    if(vec1==vec2){
        cout<<"True : ";
    }
    else{
        cout<<"False : ";
    }
    cout<<endl;
    return 0;
}