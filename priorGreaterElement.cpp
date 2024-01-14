#include<iostream>
#include<array>
using namespace std;

int priorMinElement(array<int,5>&a){
    int size=a.size();
    int max=INT_MIN;
    int count=0;
    for(auto i : a){
        if(i>max){
            count++;
            max=i;
        }
    }
    return count;
}

int main(){
    array<int,5>a{1,2,0,4,6};
    cout<<priorMinElement(a);
    return 0;
}