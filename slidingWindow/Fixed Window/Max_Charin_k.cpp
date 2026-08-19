#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    // Sliding window : 
    int left=0,right=k,MaxVowel=0,vowel=0;
    for(int i=0;i<k;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel++;
        }
    }
    MaxVowel=vowel;
    while(right<str.size()){
        if(str[left]=='a' || str[left]=='e' || str[left]=='i' || str[left]=='o' || str[left]=='u'){
            vowel--;
        }
        if(str[right]=='a' || str[right]=='e' || str[right]=='i' || str[right]=='o' || str[right]=='u'){
            vowel++;
        }
        right++;
        left++;
        MaxVowel=max(vowel,MaxVowel);
    }
    cout<<"Maximum Char of vowel are : "<<MaxVowel<<endl;
    return 0;
}