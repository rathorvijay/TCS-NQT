#include<iostream>
#include<vector>
using namespace std;

int main(){
    string parent,childs;
    char child;
    vector<string>childrens;
    cout<<"enter the parent"<<endl;
    cin>>parent;
    cout<<"enter the child of parent Y or N"<<endl;
    cin>>child;
    if(child=='N' || child=='n'){
        cout<<"total member 1"<<endl;
        cout<<"commision details "<<endl;
        cout<<"parent "<<250<<endl;
    }
    else{
        cout<<"enter the childs use , for mulitple"<<endl;
        cin>>childs;
        string temp="";
        for(int i=0; i<childs.length(); i++){
            if(childs[i]==','){
                childrens.push_back(temp);
                temp="";
            }else{
                temp+=childs[i];
            }
        }
        childrens.push_back(temp);
        cout<<"total members "<<childrens.size()+1<<endl;
        cout<<"commision details"<<endl;
        cout<<"parent "<<childrens.size()*250<<endl;
        for(auto i:childrens){
            cout<<i<<" "<<250<<endl;
        }
    }
    return 0;
}