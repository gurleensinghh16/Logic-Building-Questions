#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Ente the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    vector <int> sum;
    cout<<"Enter the elements inside the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
{
    for(int j=i; j<n; j++)
    {
        int sum=0;
        for(int k=i; k<=j; k++)
        {
            cout << arr[k] << " ";
        }

        cout << endl;
    }
}
}