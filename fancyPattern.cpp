#include<iostream>
#include<vector>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<17/2-i; j++){
            cout<<"*";
        }
        int e=1;
        for(int p=0; p<2*i+1; p++){
            if(e&1){
                cout<<i+1;
            }else{
                cout<<"*";
            }
            e=!e;
        }
        for(int k=0; k<17/2-i; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}