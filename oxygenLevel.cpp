#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


/*                traineer 1 traineer 2 traineer 3
        oxygen      90          88          70
        oxygen      77          56          99  
        oxygen      11          23          0 (input 111>100?0:number)

        tainner 1  (90+77+11)/3=59.3
        taineer 2 (88+56+23)/3=55.6
        taineer 3 (70+99+0)/3=56.3

        max(taineer 1,2,3)
        if more than one taineer oxygen is equal than print both of them

*/

void maxOxygenLevel(vector<vector<int>>&person){
    unordered_map<int,int>level;
    int max=INT_MIN;
    for(int i=0; i<person.size(); i++){
        int sum=0;
        for(int j=0; j<person[0].size(); j++){
            sum=sum+person[j][i];
        }
        pair<int,int>p=make_pair(i,sum/person.size());
        level.insert(p);
    }
    
    for(auto i : level){
        if(i.second>max){
            max=i.second;
        }
    }

    for(auto i: level){
        if(max==i.second){
        cout<<"trainee number "<<i.first+1<<endl;
        cout<<"oxygen level "<<i.second<<endl;
        }
    }
}

int main(){
    vector<vector<int>>person;
    int row,col,element;
    cout<<"enter the row "<<endl;
    cin>>row;
    cout<<"enter the coloum"<<endl;
    cin>>col;
    for(int i=0; i<row; i++){
        vector<int>p;
        for(int j=0; j<col; j++){
            cout<<"enter the element"<<endl;
            cin>>element;
            if(element<0 || element>100){
                p.push_back(0);
            }else{
                p.push_back(element);
            }
        }
        person.push_back(p);
    }

    for(auto i:person){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    maxOxygenLevel(person);
    return 0;
}