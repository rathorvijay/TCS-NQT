#include<iostream>
#include<vector>
using namespace std;

int secondMinElement(vector<int>&a){
    int min=INT_MAX;
    int s_min=INT_MAX;

    for(int i=0; i<a.size(); i++){
        if(a[i]<min){
            //cout<<a[i]<<endl;
            s_min=min;
            min=a[i];
        }
        else if(s_min>a[i] && min!=a[i]){
            s_min=a[i];
        }
    }

    return s_min;
}
 
int main(){
    vector<int>a={4,5,3,7,9,10};
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<"\nsecond min element "<<secondMinElement(a);
    return 0;
}