#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter size of 1st and 2nd arrat : ";
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
    cout<<"Intersection Elements are : ";
    // Finding Intersection
    for (int i = 0; i < n1; i++)
    {
        if (mp2.find(arr1[i]) != mp2.end())
        {
            cout<<arr1[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}