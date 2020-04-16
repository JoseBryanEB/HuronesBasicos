#include<iostream>
#include<vector>
#include<string>
using namespace std;
string giro (char *entrada, string actual){
int encontrada=0;
vector<string>planoy={"+x","+y","-x","-y","+x"};
vector<string>planoz={"+x","+z","-x","-z","+x"};
if (entrada[1]=='y'){
    //giro en plano (xy)
    if (entrada[0]=='+'){
        for (auto a: planoy)
            if (a.compare(actual)==0) encontrada=1;
            else if (encontrada==1){actual=a; break;}
    }
    else{
        for (int i=4;i>=0; i--)
         if (planoy[i].compare(actual)==0) {encontrada=1;actual=planoy[--i];}
    }
}
else {
    //giro en plano (zy)
   if (entrada[0]=='+'){
        for (auto a: planoz)
            if (a.compare(actual)==0) encontrada=1;
            else if (encontrada==1){actual=a; break;}
    }
    else{
        for (int i=4;i>=0; i--)
         if (planoz[i].compare(actual)==0) {encontrada=1;actual=planoz[--i];}
    }
}
return actual;
}
int main  (){
    int L; 
    while (1){
        cin>>L;
        string actual="+x",posicion;
        if (L==0)break; 
        L--;
        while (L--){
	//lectura de la entrada en el eje y o z
        cin>>posicion;
        auto auxpo=posicion.c_str();
        if (posicion.compare("No")!=0 ){
               // cout<<auxpo;
            if (actual.c_str()[1]=='x' || auxpo[1]==actual.c_str()[1]){
                
                actual=giro((char*)auxpo,actual);
                
            }
        }

        }
        cout<<actual<<endl;

    }
    return 0;
}
