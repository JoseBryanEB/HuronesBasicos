#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0); cin.tie(0);
typedef struct Nodelista{
    long int data;
    Nodelista *nodoSiguiente;

} Node;
Node * agregar(Node *list,int element){
	Node *aux= new Node;
	aux->nodoSiguiente=list;
	aux->data=element;
	list=aux;
    return list;
}
void insert_in_list(Node *head,int element,int position){
    
}
using  namespace std;
int main (){
    long int n,p;
    cin>>n>>p;
    p--;
    long int a; 
    vector<long int> mylist(0);
    while (n--){
        cin>>a;
        mylist.push_back(a);
        }
 
    int comands=0;
    cin>>comands; 
    
    while(comands--){
        string comand; 
        cin>> comand;
        char op=comand[4];
        switch (op){
            case 'L':{
                // moveLeft
                if (p>0)p--;
            }break;
            case 'R':{
                //moveRight
                if (p<mylist.size()-1)p++; 
            }break;
            case 'r':{
                cin>>a;
                if(comand[6]=='R'){ 
                    vector<long int> :: iterator it=mylist.begin();
                    mylist.insert(it+p+1,a);
                }
                else {
                    vector<long int> :: iterator it=mylist.begin();
                    mylist.insert(it+p,a);p++;
                }
            }break;
            case 't':{
                  vector<long int> :: iterator it=mylist.begin();
                cout<<*(it+p)<<endl;
            }break;

        }
    }
   /* cout<<endl;
    for (auto a: mylist){
        cout<<a;
    }*/
    
    return 0;
}