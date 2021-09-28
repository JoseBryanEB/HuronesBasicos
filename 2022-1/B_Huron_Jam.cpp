#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main (){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
        cin.tie(NULL);
	int n ; 
	cin>>n;
	int aux=0;
	int sum=0; 
	for (int i=0;i<n;i++){
		if (i>0 && (i%2)==1){
			int a;
			cin>>a;
			sum+=abs(aux-a);
		}
		else cin>>aux;}
	cout<<sum;

}
