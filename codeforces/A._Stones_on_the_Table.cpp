#include<bits/stdc++.h>
//#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std; 
int main (){ 
    int n,i,c=0; 
    cin>> n; 
    string stones=""; 
    cin>>stones;
    int len=stones.length();
    for ( int i=0;i<len-1;i++){
        if (stones[i]==stones[i+1]){
            c++;
      } 
    }
   cout<<c;
}