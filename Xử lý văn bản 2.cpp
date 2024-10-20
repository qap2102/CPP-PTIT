#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string s;
bool kt;
int main(){
    faster;
    kt=true;
    while(cin>>s){
        int n=s.size();
        for(int i=0;i<=n-1;i++){
            s[i]=tolower(s[i]);
        }
        if(kt){
            s[0]=toupper(s[0]);
            kt=false;
        }
        if(s[n-1]=='.'||s[n-1]=='?'||s[n-1]=='!'){
            s.erase(n-1,1);
            kt=true;
            if(!s.empty()&&s[n-1]!='.'||s[n-1]!='?'||s[n-1]!='!'){
            	s+='.';
			}
            cout<<s<<endl;

        }
        else cout<<s<<" ";
    }
}
