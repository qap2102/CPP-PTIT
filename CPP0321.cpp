#include<bits/stdc++.h>
using namespace std;
string hieu(string s1, string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    if (s1<s2) swap(s1,s2);
    string s="";
    int a, b=0;
    for(int i=s1.size()-1;i>=0;i--){
        a=s1[i]-s2[i]-b;
        if(a<0){
            a+=10;
            b=1;
        }
        else b=0;
        s=char(a+'0')+s;

    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        cout<<hieu(s1,s2)<<endl;
    }
}