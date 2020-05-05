#include<bits/stdc++.h>


using  namespace std;
#define io_ ios_base::sync_with_stdio(0); cin.tie(0);
int main (){
    long int n,p;
    cin>>n>>p;
    long int a; 
    list<long int> mylist;
    list<long int>::iterator it=mylist.end(),aux;
    p--;
    for (int i=0;i<n;i++){
        cin>>a;
        list<long int>::iterator aux1=mylist.insert(it,a);
        if(i==p)aux=aux1;   
        }
    int comands=0;
    cin>>comands; 
    
    while(comands--){
        string comand; 
        cin>> comand;
        char op=comand[4];
        switch (op){
            case 'L':{
                //moveLeft
                if (aux!=mylist.begin())aux--;
            }break;
            case 'R':{
                //moveRight
                if (aux!=(--mylist.end()))aux++; 

            }break;
            case 'r':{
                cin>>a;
                if(comand[6]=='R'){ 
                    aux=mylist.insert(++aux,a);
                    aux--;
                }
                else {
                    aux=mylist.insert(aux,a);
                    aux++;
                }
            }break;
            case 't':{
                cout<<*aux<<endl;
            }break;

        }
    }
   /*cout<<endl;
    for (auto a: mylist){
        cout<<a;
    }*/
    
    return 0;
}