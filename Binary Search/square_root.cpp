#include <iostream>
using namespace std;
int main ()
{
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    int low=0,high=target,ans=-1;
    long long mid;
    bool found=false;

    while(low<=high){
        mid=(low+high)/2;
        if((mid*mid)==target){
            found=false;
            break;
        }
        else if((mid*mid)>target){
            high=mid-1;
        }
        else if((mid*mid)<target){
            if((mid*mid)>ans){
                ans=mid;
                found=true;
            }
            low=mid+1;
        }
    }
    if(!found){
        cout<<"Square root is : "<<mid<<endl;
    }
    else{
        cout<<"Square root is : "<<ans<<endl;
    }
    return 0;
}