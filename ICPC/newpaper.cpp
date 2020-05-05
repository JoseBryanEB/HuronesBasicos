#include<string>
#include<iostream>
#include<list>
using namespace std;
int main (){
string buffer;
list<char> bufferFinal;
list<char>::iterator it;
while (getline(cin,buffer)){
    bool flagI=0;
    bufferFinal.clear();
    it=bufferFinal.begin();
    for (char a: buffer){
        if (a=='['){it=bufferFinal.begin();}
        if (a==']'){it=bufferFinal.end();}
        if (a!='[' && a!=']'){bufferFinal.insert(it,a);}
       
    }
    for (auto a: bufferFinal){

        cout<<a;
    }
    cout<<endl;
}

}
