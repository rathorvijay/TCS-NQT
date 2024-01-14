#include<iostream>
#include<vector>
using namespace std;

int equalSum(vector<int>&a){
    int sum=0;
    int leftSum=0;
    for(auto i : a){
        sum+=i;
    }
    for(int i=0;i<a.size(); i++){
        sum-=a[i];
        if(sum==leftSum){
            return i+1;
        }
        leftSum+=a[i];
    }
    return -1;
}

int main(){
    vector<int>a= { -7, 1, 5, 2, -4, 3, 0 };
    cout<<equalSum(a);
    return 0;
}