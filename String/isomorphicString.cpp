#include <iostream>
using namespace std;
int main ()
{
    vector <pair<char,char>> vec;
    string str1,str2;
    cout<<"Enter 1st string :";
    cin>>str1;
    cout<<"Enter 2nd string :";
    cin>>str2;

    for(int i=0;i<str1.size();i++){
    if(str1.size()!=str2.size()){
        cout<<false;
        break;
    }
    vec.push_back({str1[i],str2[i]});
}
    bool match=true;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[i].first==vec[j].first){
                if(vec[i].second!=vec[j].second){
                    match=false;
                    break;
                }
            }
            if(vec[i].second==vec[j].second){
                if(vec[i].first!=vec[j].first){
                    match=false;
                    break;
                }
            }
        }
        if(!match){
            cout<<"False"<<endl;
            break;
        }
    }
    if(match){
        cout<<"True"<<endl;
    }
    return 0;
}