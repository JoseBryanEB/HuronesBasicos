#include<bits/stdc++.h>
using namespace std;
int main(){
long int n; 
 cin>>n;
 vector<long int> valores(n); 
 long int mayor=0,menor=0;
 for (int i=0;i<n;i++){
     long int value;
     cin>>value;
     menor=min(menor,value);
     mayor=max(mayor,value);
   valores[i]=value;
 }

  long int resultado=0;
  for (int i=0;i<n-1;i++){
    long int auxmayor=mayor^valores[i];
    long int auxmenor=menor^valores[i];
    auxmayor=max(auxmayor,auxmenor);
    resultado=max(auxmayor,resultado);
  }

  cout<<resultado<<endl;
  return 0;
}