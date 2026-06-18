#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a Sentence :";
    cin>>str;

    //Bubble sort
    for(int i=0;i<str.size();i++){
        bool swapp=false;
        for(int j=0;j<str.size()-1;j++){
            if(str[j+1]<str[j]){
                swap(str[j],str[j+1]);
                swapp=true;
            }
        }
        if(!swapp){
            break;
        }
    }
    cout<<"Sorted string is :";
    for(auto x : str){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}