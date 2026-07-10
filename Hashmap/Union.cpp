#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter size of 1st and 2nd array : ";
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    cout << "Enter elements inside 1st aray : ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements inside 2nd aray : ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    unordered_map<int, int> mp1, mp2;
    unordered_map<int,int> ans;
    // Inserting inside 1st map
    for (int i = 0; i < n1; i++)
    {
        mp1[arr1[i]]++;
    }
    // Inserting insdie 2nd map
    for (int i = 0; i < n2; i++)
    {
        mp2[arr2[i]]++;
    }
    cout<<"Union Elements are : ";
    // printing union
    for(auto x : mp1){
        ans[x.first]++;
    }
    for(auto x : mp2){
        ans[x.first]++;
    }
    for(auto x : ans){
        cout<<x.first<<" ";
    }
    cout<<endl;
    return 0;
}