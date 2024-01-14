#include<iostream>
using namespace std;

string cipherText(string &str){
    int key=1;
    cout<<"enter the key"<<endl;
    cin>>key;
    int i=0;
    char ch=str[i];
    int index=0;
    int rem=0;
    string cypher="";
    while(ch!='\0'){
        if(ch>=65 && ch<=90){
            index=ch-'A';
            rem=(index+key)%26; // A-Z there is 26 charactor (65-90) both are included
            cypher+=rem+'A';
        }
        else if(ch>=97 && ch<=122){
             index=ch-'a';
             rem=(index+key)%26; // a-z there is 26 charactor (97-122) both are included
             cypher+=rem+'a';
        }
        else{
             index=ch-'0';
             rem=(index+key)%10;  // 0-9 there is 10 number  (48-57) both are included
             cypher+=rem+'0';
        }
        ch=str[++i];
    }
    return cypher;
}

int main(){
    string str = "Vijay856";
    cout<<str<<endl;
    cout<<cipherText(str);
    return 0;
}