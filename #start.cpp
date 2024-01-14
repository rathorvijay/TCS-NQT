#include<iostream>
using namespace std;
int check(string &str){
    int star=0;
    int hesh=0;
    for(auto i: str){
       if(i=='*'){
            star++;
       }
       else if(i=='#'){
        hesh++;
       }
    }
    if(star==hesh){
        return 0;
    }
    else{
        return star>hesh?star-hesh:hesh-star;
    }
}
int main(){
    string str="***####";
    int result=check(str);
    if(result){
        cout<<"need "<<result<<endl;
    }else{
        cout<<"equle "<<result<<endl;
    }
    return 0;
}