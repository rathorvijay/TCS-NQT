#include<iostream>
using namespace std;

int totalVehicles(int weels,int vehicles){
    /*
    let x is a two weelers
    let y is a four weeelers
    total_vehicles=x+y
    total_weels=2x+4y  two vehicles requried 2 weel to build the bike and four weeler need to build 4 weels to build the car

    constain
    weels should be greater than equle to 2 (w>=2)
    vehicles should be less than weels (v<w)
    weels should be even (w%2==0)

    x=(4v-w)/2
    y=v-x
    */
   if(weels&1 || weels<vehicles || weels<2){
    return -1;
   }
   else{
    int x=(4*vehicles-weels)/2;
    int y=vehicles-x;
    return x+y;
   }
}

int main(){
    int weels,vehicles;
    cout<<"enter the weels"<<endl;
    cin>>weels;
    cout<<"enter the vehicles"<<endl;
    cin>>vehicles;
    int total=totalVehicles(weels,vehicles);
    if(total==-1){
        cout<<"pls enter the correct data"<<endl;
    }else{
        cout<<"total vehicles is "<<total<<endl;
    }
    return 0;
}