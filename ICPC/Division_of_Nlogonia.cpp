#include<iostream>
using namespace std;
int main (){
/*
 * Programa de Divicion de Nlogonia solo conciste en ver en que cuadrante se encuentra la entrada
 * */ 
while (1){
int consultas=0,cero[2]={0,0},consulta[]={0,0};
cin>>consultas;
cout<<consultas;
if (consultas==0)break;
cin>>cero[0]>>cero[1];
//cout>>cero[0]<<cero[1];
while (consultas--){
		//corrimiento de valore de acuedo al punto x,y tomado como inicio
		cin>>consulta[0]>>consulta[1];
		for(int i=0;i<2;i++){
			char signo=1;
			if (consulta[i]<0)signo=-1;
			consulta[i]=consulta[i]-(cero[i]);
		}
		if (consulta[0]==0||consulta[1]==0)cout<<"divisa";
		else if (consulta[0]>0 && consulta[1]>0)cout<<"NE";
		else if (consulta[0]>0 && consulta[1]<0)cout<<"SE";
		else if (consulta[0]<0 && consulta[1]<0)cout<<"SO";
		else cout<<"NO";
		cout<<endl;
	}
}
}
