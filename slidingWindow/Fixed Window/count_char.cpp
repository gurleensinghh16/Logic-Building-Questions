#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    char ch;
    cout<<"Enter the char to check : ";
    cin>>ch;
    // Sliding window : 
    int left=0,right=k,count=0;
    for(int i=0;i<k;i++){
        if(str[i]==ch){
            count++;
        }
    }
    int i=1;
    cout<<"In "<<i<<" -> occurs "<<count<<" times : "<<endl;
    while(right<str.size()){
        if(str[left]==ch){
            count--;
        }
        if(str[right]==ch){
            count++;
        }
        left++;
        right++;
        i++;
        cout<<"In "<<i<<" -> occurs "<<count<<" times : "<<endl;
    }
    return 0;
}