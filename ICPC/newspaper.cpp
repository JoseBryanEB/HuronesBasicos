#include<bits/stdc++.h>
using namespace std; 
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
bool compare (vector<int> a, vector<int> b){
    return a[0]<b[0];
}
int main (){
        int n; 
        cin>>n; 
        // cantidad de casos tester
        while (n--){
            int k;
            int m; 
            cin>>k;
            vector<vector<int>> value_character(k);  
            scanf("%d",&k);   
           for(int i=0;i<k;i++){
               char caracter; int cents;
               cin>>caracter>>cents;
               value_character[i].resize(2);
               value_character[i][0]=caracter;
               value_character[i][1]=cents;
           }
           /*sort(value_character.begin(), value_character.end(),compare);
           for (auto a: value_character){
               cout<<(char)a[0]<<" "<<a[1]<<endl;
           }*/
            scanf("%d",&m);
            long long int final=0;
            cin.ignore();
            while (m--){
                string line="";
                getline(cin,line);

                for (int i=0;i<k;i++){
                    int dato=count(line.begin(),line.end(),value_character[i][0]);
                    final+=dato*value_character[i][1];
                }
                  
            }
            cout<<fixed<<setprecision(2)<<(double)final/100.0<<"$"<<endl;
        }
}