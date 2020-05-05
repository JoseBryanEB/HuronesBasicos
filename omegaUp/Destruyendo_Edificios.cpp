#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef pair<int,int>state;
long long MaimumArea(vector<int>& buildings){
    buildings.push_back(0);
    long long maxArea=-1;
    stack<state> my_stack;
    for (int n=0;n<buildings.size()-1;n++){
        my_stack.push(state(buildings[n],1));
        if (buildings[n]> buildings[n+1]){
            long long carry=0; 
            long long value=buildings[n+1];
            while (!my_stack.empty() && my_stack.top().first>=value){
                long long height=my_stack.top().first;
                long long widiht=my_stack.top().second;
                maxArea=max(maxArea,height*(widiht+carry));
                carry+=widiht;
                my_stack.pop();
            }
        my_stack.push(state(buildings[n+1],carry));
        }

    }
    return maxArea;

}
int main (){
io_
int n=0;
cin>>n;
vector<int>buildings(n);
for(int i=0;i<n;i++)
{
cin>>buildings[i];
}
cout<<MaimumArea(buildings)<<endl;
return 0; 
}
