#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

float totalFare(vector<string>&busStops,vector<int>&distance,string source,string destination){
    if(source==destination){
        return -1;
    }
    int start=-1;
    for(int i=0; i<busStops.size(); i++){
        if(source==busStops[i]){
            start=i+1;
            break;
        }
    }
    cout<<"start"<<start<<endl;
    float sum=0;
    while(destination!=busStops[start]){
        sum+=distance[start];
        start=(start+1)%busStops.size();
    }
    sum+=distance[start];
    return ceil(sum*0.005);
    
}

int main(){
    vector<string>busStops={"TH","GA","IC","HA","TE","LU","NI","CA"};
    vector<int>distance=     {800,600,750,900,1400,1200,1100,1500};
    string source,destination;
    cout<<"enter the source"<<endl;
    cin>>source;
    cout<<"enter the destination"<<endl;
    cin>>destination;

    cout<<totalFare(busStops,distance,source,destination);
    return 0;
}