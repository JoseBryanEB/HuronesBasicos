#include<iostream>
using namespace std;
int main(){
   int H,Hi,DN;
   double F;
   while (1){
   cin>>H>>Hi>>DN>>F;
   if (H==0){break;}
   F=Hi*(F/100);
   int cont=1,flag=0;
   double Ha=0;
   while (cont){
   	double hf=Hi-F*(cont-1);
	if (hf<=0)hf=0;
	hf=hf+Ha;
	Ha=hf-DN;
	//cout<<hf<<" Ha:"<<Ha<<endl; 
	if (hf>H){flag=1;break;}
	if (hf<0 || Ha<0){break;}
   cont++;
   }
   if (flag==1)cout<<"success on day "<<cont;
   else cout<<"failure on day "<<cont;
   cout<<endl;
   }
}
