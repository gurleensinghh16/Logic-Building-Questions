#include <iostream>
using namespace std;
string ans;
int i=0;
void rev(string str){
    if(str.size()==i){
        return;
    }
    ans+=str[str.size()-i-1];
    i++;
    return rev(str);
}
int main ()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    rev(str);
    cout<<"Reversed String is : "<<ans<<endl;
    return 0;
}