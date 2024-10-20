#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		for(int i=0;i<s.size()-2;i++){
			if(s=="") break;
			else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
				s.erase(s.begin()+i,s.begin()+i+3);
				i-=2;
			}
		}
		cout<<n-s.size()<<endl;
	}
}