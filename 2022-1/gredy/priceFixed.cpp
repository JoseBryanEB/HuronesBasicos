#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp (const pair<ll,ll>&par1, const pair<ll,ll>&par2){

    return par1.second > par2.second;
}


int main (){
int n;
cin>>n;
vector<pair<ll,ll>>vec(n);
for (int i =0 ; i<n;i++){
    pair<ll,ll> par;
    cin>>par.first;
    cin>>par.second;
    vec.push_back(par);
}
sort(vec.begin(),vec.end(),&comp);
auto its = vec.begin();
auto ite = --vec.end();
/*for (int i=0;i<n;i++){
    cout<<vec[i].first<<" : "<<vec[i].second<<endl;
}*/
ll productos=0,suma=0;
while (true){
    if (ite<its)break;
    if (ite->second <= productos){
        suma+= ite->first;
        productos+=ite->first;
        ite--;
    }else{
        ll faltante= ite->second-productos;
        if (its->first<=faltante){
            suma+=its->first*2;
            productos+=its->first;
            its++;
        }else{
            its->first-=faltante;
            productos+=faltante;
            suma+=faltante*2;
        }

    }

}

cout<<suma;

}
