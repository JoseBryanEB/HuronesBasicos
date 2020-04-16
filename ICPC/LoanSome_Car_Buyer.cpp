#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    while (1){
        int DM,N;
        double PI,MP;
        cin>>DM>>PI>>MP>>N;
        if (DM<0)break;
        vector <int> l1;l1.resize(N);
        vector <double> l2;l2.resize(N);
        //read list of Data input abaout depresed 
        for (int i=0;i<N;i++){cin>>l1[i]>>l2[i];
        //cout<<l2[i]<<endl;
        }
        double anterior=l2[0],valorA=MP+PI;
        //aplication of rules
        vector<int>::iterator f;
        int i=0,cont=1,res=MP/DM;
        valorA=valorA*(1-l2[0]);
        if (valorA<MP){
        for (i=1;i<DM;i++){
            if (i==l1[cont]){anterior=l2[cont++];}
           // cout<<"mes "<<anterior<<valorA<<"  "<<MP<<endl;
            MP-=res;
            valorA*=(1-anterior);
            if (valorA>MP){break;}
            }}
        cout<<i<<" month";
        if (i!=1)cout<<"s";
        cout<<endl;
    }
}
