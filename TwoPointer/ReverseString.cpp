#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    // Reversing string :
    int i=0,j=str.size()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"The reversed string is : "<<str<<endl;
    return 0;
}