#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	long long int l=0,m,r=1e9,min=-1;
while (r>=l){
m = l+ (r-l)/2;
long long int calculo= ((m*(m+1))+((m-1)*m)/2);
if (calculo<=n){
	min=calculo;
	l=m+1; 
}else {r=m-1;}
}
return min;
}


int main (){
int n,test;
cin>>test;
while (test--){
cin>>n;
int cont=0; 
while (n>=2){
n-=solve(n);
cont++; 
}
cout<<cont<<endl; 
}
}
