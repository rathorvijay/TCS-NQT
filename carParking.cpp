#include<iostream>
#include<vector>
using namespace std;

int maxParking(vector<vector<int>>&a){
    int index=-1;
    int max=INT_MIN;
    for(int i=0; i<a.size(); i++){
         int sum=0;
        for(int j=0; j<a[0].size(); j++){
            sum+=a[i][j];
        }
        if(sum>max){
            max=sum;
            index=i;
        }
        else if(sum==max){
            return index+1;
        }
    }
    return index+1;
}
int main(){
    vector<vector<int>>a={{1,0,0},{1,1,0},{1,1,0}};
    cout<<maxParking(a);
    return 0;
}
