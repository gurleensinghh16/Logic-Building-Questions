#include <iostream>
using namespace std;
int main ()
{
    int n,elt;
    cout<<"Enter size of array :";
    cin>>n;
    bool done=false;
    vector <int> vec;
    cout<<"Enter elements inside the array :";
    for(int i=0;i<n;i++){
        elt=0;
        cin>>elt;
        vec.push_back(elt);
    }

    //Inserting element 
    cout<<"Enter the Element want to insert :";
    cin>>elt;
    if(vec[0]>elt){
        vec.insert(vec.begin(),elt);
        done=true;
    }
    else if(vec[vec.size()-1]<elt){
        vec.insert(vec.begin()+vec.size(),elt);
        done=true;
    }
    if(!done){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==elt){
            vec.insert(vec.begin()+i,elt);
            done=true;
            break;
        }
    }
}
    if(!done){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]<elt and vec[i+1]>elt){
            vec.insert(vec.begin()+i+1,elt);
        }
    }
}
    cout<<"Inserted array is :";
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}