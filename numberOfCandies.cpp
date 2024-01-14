#include<iostream>
using namespace std;

int main(){
    int candies;
    int n=10,k=5;
    cout<<"enter the candies"<<endl;
    cin>>candies;
    if(candies>=1 && candies<=k){
        cout<<"number of candies sold "<<candies<<endl;
        cout<<"number of candies available in the jar "<<n-candies;
    }else{
        cout<<"invalid input"<<endl;
        cout<<"number of candies available "<<n;
    }
    return 0;
}