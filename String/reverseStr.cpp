#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a sentence :";
    getline(cin,str);
    // Reverse
    int i=0;
    int j=str.size()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"The reverse string is :"<<str<<endl;
}