#include<bits/stdc++.h>
using namespace std;
#define ford(i,b,a) for(int i=b;i>=a;--i)
int t;
string s1,s2;
string add(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    string s="";
    int a,b=0; // b là số nhớ sau khi cộng 2 số
    for(int i=s1.size()-1;i>=0;i--){
        a=(s1[i]-'0')+(s2[i]-'0')+b;
        s=char(a%10+'0')+s;
        b=a/10;
    }
    if (b==1) s="1"+s;
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1;
        cin >> s2;
        cout << add(s1,s2) << "\n";
    }
}