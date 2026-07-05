#include <iostream>
#include <vector>
using namespace std;

void subsequence(int arr[], int n, int index, vector<int> &current)
{
    if(index == n)
    {
        for(int x : current)
            cout << x << " ";
        cout << endl;
        return;
    }
    // Choice 1 : Take the current element
    current.push_back(arr[index]);
    subsequence(arr, n, index + 1, current);

    // Backtrack
    current.pop_back();

    // Choice 2 : Skip the current element
    subsequence(arr, n, index + 1, current);
}

int main()
{   
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    vector<int> current;
    cout<<"Enter elements inside array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subsequence(arr, n, 0, current);
}