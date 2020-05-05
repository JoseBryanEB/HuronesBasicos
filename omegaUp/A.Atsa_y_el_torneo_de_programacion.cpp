#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main (){
    
    long int n,value,acumulador=0;
    cin>>n;
    vector<long int> valores(n);
    for (int i=0;i<n;i++)
    {cin>>value;
        valores[i]=value;
        acumulador+=value;
    }
    long long valueF=0;
    value=-1;
    for (long int i=0;i<n;i++){
        value=valores[i];
        acumulador-=value;
        valueF+=value*(acumulador);
        
    }
    
    cout<<valueF<<endl;
}