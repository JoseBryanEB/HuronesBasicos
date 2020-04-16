#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
vector <int>vect={0,0,0};
int n;
cin>>n;
for (int i=1; i<=n; i++){
    cin>>vect[0]>>vect[1]>>vect[2];
    sort(vect.begin(),vect.end());
    cout<<"Case "<<i<<": "<<vect[1]<<endl;
}

}