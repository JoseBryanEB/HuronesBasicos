#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std; 
int main (){
int n, t; 
cin>>n>>t; 
string cola;
cin>>cola;
while (t--){

for (int i=0 ;i<cola.size()-1;i++){
    if (cola[i]=='B' && cola[i+1]=='G')swap (cola[i],cola[i++]);
    
}
} 
cout<< cola;

}