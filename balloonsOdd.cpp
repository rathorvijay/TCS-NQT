#include<iostream>
#include<vector>
using namespace std;


char BalloonsOdd(vector<char>&a){
    int hash[26]={0};
    int add=0;
    for(auto i : a){
        if(i>=65 && i<=90){
            hash[i-'A']++;
        }
        else if(i>=97 && i<=122){
            hash[i-'a']++;
        }
    }

    for(auto i:a){
        int number;
        if(i>=65 && i<=90){
            number=hash[i-'A'];
        }
        else if(i>=97 && i<=122){
            number=hash[i-'a'];
        }
        if(number & 1){
            add=i;
            return i;
        }
    }
    return '0';
}

int main(){
    vector<char>a={'a','b','b','b','c','c','c','a','f','c'};
    char result=BalloonsOdd(a);
    if(result=='0'){
        cout<<"there is no add charactor present "<<endl;
    }else{
        cout<<"'"<<result<<"'"<<" is present odd time"<<endl;
    }
    return 0;
}