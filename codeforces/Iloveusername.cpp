#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int newmax,newmin,cont=0;
    cin>>n; 
    cin>>newmax;
    newmin=newmax;
    for (int i=1 ;i<n; i++){
        int constes_points;
        cin>>constes_points; 
        if (constes_points>newmax){cont++; newmax=constes_points;}
        if (constes_points<newmin){cont++; newmin=constes_points;}
    } 
    cout<<cont;
    
    }