#include<iostream>
#include<vector>
using namespace std;

int maxGuest(vector<int>&entry,vector<int>&exit){
    int max_count=INT_MIN;
    int count=0;
    for(int i=0; i<entry.size(); i++){
        count=count+entry[i]-exit[i];
        if(count>max_count){
            max_count=count;
        }
    }
    return max_count;
}

int main(){
    int time;
    vector<int>entry={7,0,5,1,3};
    vector<int>exit={1,2,1,3,4};
    cout<<maxGuest(entry,exit);
    return 0;
}