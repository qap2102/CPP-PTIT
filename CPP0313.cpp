#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int a=s1.find(s2);
    while(a!=string::npos){
        s1.erase(a,s2.size());
        a=s1.find(s2);
    }
    cout<<s1;
}