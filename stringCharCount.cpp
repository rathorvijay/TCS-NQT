#include<iostream>
using namespace std;
int main(){
    string str="ac";
    int i=0;
    int count=1;
    while(str[i]!='\n' && (i+1)<str.length()){
        if(str[i]==str[i+1]){
            count++;
        }else{
            cout<<str[i]<<count;
            count=1;
        }
        i++;
    }
    cout<<str[i]<<count;
    return 0;
}