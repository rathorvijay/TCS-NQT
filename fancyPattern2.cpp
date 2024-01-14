#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int i=0; i<4; i++){
        int e=0;
        for(int j=0; j<2*i+1; j++){
            if(e&1){
                cout<<"*";
            }else{
                cout<<count++;
            }
            e=!e;
        }
        cout<<"\n";
    }
    for(int i=0; i<4; i++){
        int e=0;
        for(int j=0; j<4-i; j++){
            if(e&1){
                cout<<"*";
            }else{
                cout<<count++;
            }
            e=!e;
        }
        cout<<"\n";
    }

    
}