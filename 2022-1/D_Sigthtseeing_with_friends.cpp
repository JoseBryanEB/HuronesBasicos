#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main (){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
        cin.tie(NULL);
	int n,p,a;
	cin>>n>>p>>a;
	map<int,int> mmap;
	for(int i =0 ; i<p; i++){
		int l,r; 
		cin>>l>>r;
		mmap[max(l,r)]=min(l,r);}
	map<int,int>::iterator it,it2; 
	for(int i=0; i<a;i++){
		int u,b;
	       	cin>>u>>b;	
		string result="NO"; 
		it=mmap.lower_bound(max(u,b));
		if (it!=mmap.end()){
			if (it->first==max(u,b) && it->second<=min(u,b)){
				result="YES";
			}
			else if ((++it)->second<=min(u,b)){
				result="YES";}
		}

			cout<<result<<it->first<<"    "<<it->second<<endl;
	}
}
