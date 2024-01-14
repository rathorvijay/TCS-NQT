#include<iostream>
#include<vector>
using namespace std;

int removeDuplicateElement(vector<int>&a){
    int j=0;
    int i=1;
    while(i<a.size()){
        if(a[i-1]!=a[i]){
           a[++j]=a[i];
        }
        i++;
    }
    for(int i=0; i<=j; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return j+1;
}

int main(){                 
    vector<int>a={1,2};
    cout<<removeDuplicateElement(a);
    return 0;
}