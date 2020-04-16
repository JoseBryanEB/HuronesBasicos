#include<iostream>
#include<fstream>
using namespace std;
int main () {
int n,p,num=1;

while (1){
    scanf("%d %d",&n,&p);
    if(n==0 && p==0)break;
    scanf("\n");
    if(num!=1)cout<<endl; 
    string aux;
    for (int i=0; i<n;i++)getline(cin,aux);//cout<<aux<<endl;}
    string pro;
    double precio=0.0;
    double compliance=0.0;
    int i=0;
    for (;i<p;i++){
        getline(cin,aux);
        int met_requ;
        double met_pre;
        scanf("%lf %d\n",&met_pre,&met_requ);
        if (met_requ > compliance) {
            //cout<<met_requ/p;
            compliance=met_requ;
            pro=aux;
            precio=met_pre;
        }
        else  if (met_requ == compliance && precio>met_pre){
            compliance=met_requ;
            pro=aux;
            precio=met_pre;
        }
        //limpiar buffer
        while (met_requ--)getline(cin,aux);
    }
     cout<<"RFP #"<<num++<<'\n'<<pro<<endl;
}    
} 
/*
6 4
engine
brakes
tires
ashtray
vinyl roof
trip computer
Chevrolet
20000.00 3
engine
tires
brakes
Cadillac
70000.00 4
ashtray
vinyl roof
trip computer
engine
Hyundai
10000.00 3
engine
tires
ashtray
Lada
6000.00 1
tires
*/ 
