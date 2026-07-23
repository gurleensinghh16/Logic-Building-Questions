#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main()
{
  int n;
  vector<int> vec;
  cout << "Enter the Size of array : ";
  cin >> n;
  int k;
  cout<<"Enter value of k : ";
  cin>>k;
  int arr[n];
  unordered_map<int, int> mp1;
  cout << "Enter elements inside array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // Entering elements inside hashmap
  for (int i = 0; i < n; i++)
  {
    mp1[arr[i]]++;
  }
  // Finding K elements
  int count = 0, elt;
  while(k>0 and !mp1.empty()){
    count=0;
  for (auto x : mp1)
  {
    if (x.second > count)
    {
      count = x.second;
      elt = x.first;
    }
  }
  vec.push_back(elt);
  mp1.erase(elt);
  k--;
}
for(auto x: vec){
    cout<<x<<" ";
}
cout<<endl;
return 0;
}