#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array :";
    int n;
    cin>>n;
    string arr[n];
    string ans;
    cout<<"Enter values inside string :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check=false;
    for(int i=0;i<arr[0].size();i++){
        int j=0;
        while(j<n){
            if(arr[0][i]==arr[j][i]){
                j++;
                check=true;
            }
            else{
                check=false;
                break;
            }
        }
        if(check==true){
            ans+=arr[0][i];
        }
        else{
            break;
        }
}
if(ans.size()==0){
    cout<<"Nothing common :"<<endl;
}
else{
cout<<"The common string is : "<<ans<<endl;
}
return 0;
}