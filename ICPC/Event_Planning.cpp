#include<iostream>
#include<vector>
using namespace std;
int main(){
    int P=0,presupuesto,H,S;
    while (scanf("%d %d %d %d",&P,&presupuesto,&H,&S)!=EOF){
        
        int solved=0;
        while (H--){
            //read data of the standar  
            int presio=0;
            cin>>presio;
            for (int i =0,Cup=0; i<S;i++){
                cin>>Cup;
                if (Cup>=P){
                if ((solved==0) ||(solved>(presio*P) && presio*P>0))
                    if ((presio*P)<=presupuesto)solved=presio*P;}
            }
        }
        if (solved==0)cout<<"stay home";
        else cout<<solved;
        cout<<endl;

    }
}