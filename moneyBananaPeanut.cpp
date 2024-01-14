#include<iostream>
using namespace std;

int monkeysLefts(int m,int b,int p,int tb,int tp){
    if(m<0 || b<0 || p<0 || tb<0 || tp<0){
        return -1;
    }
    int l=tb/b;  // 10/2
    int k=tp/p;  // 21/3
    return m-(l+k);   // 30 -(5+7)
}

int main(){
    int bananas,peanuts,totalbananas,totalneaputs;
    cout<<"enter the total monkey"<<endl;
    int monkeys;
    cin>>monkeys;
    cout<<"enter the how many bananas monkey eat at a time"<<endl;
    cin>>bananas;
    cout<<"enter the how many peanuts monkey eat at a time"<<endl;
    cin>>peanuts;
    cout<<"enter the total bananas"<<endl;
    cin>>totalbananas;
    cout<<"enter the total peanuts"<<endl;
    cin>>totalneaputs;
    cout<<monkeysLefts(monkeys,bananas,peanuts,totalbananas,totalneaputs);
    return 0;
}