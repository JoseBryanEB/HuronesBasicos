#include<iostream>
using namespace std;
int main(){
    int nData;
    cin>>nData;
    for (int i=1;i<=nData;i++){
        int Monsters=0,maxVelocidad=0;
        cin>>Monsters;
        while (Monsters--){
            int vel; cin>>vel;
            if (maxVelocidad<vel)maxVelocidad=vel;
        }
        cout<<"Case "<<i<<": "<< maxVelocidad<<endl;
    }
}