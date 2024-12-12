#include <bits/stdc++.h>
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
		set<char> se;
		for(int i=0;i<s.size();++i){
			se.insert(s[i]);
		}
		int minn=INT16_MAX;
		for(int i=0;i<=s.size()-se.size();++i){
			set<char> ss;
			for(int j=i;j<s.size();++j){
				ss.insert(s[j]);
				if(ss.size()==se.size()){
					minn=min(minn,j-i+1);
					break;
				}
			}
		}
		cout<<minn<<endl;
	}
}
