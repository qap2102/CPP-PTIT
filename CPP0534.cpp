#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string s;
bool palin(string s){
	int n=s.size();
	for(int i=0;i<n/2;++i){
		if(s[i]!=s[n-i-1]) return false;
	}
	return true;
}
bool cmp(string s1, string s2){
	while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    return s1>s2;
}
int main(){
	faster;
	string s;
	vector<string> a;
	while(cin>>s){
		if(s.size()>1&&palin(s)){
			a.push_back(s);
		}
		
	}
	sort(a.begin(),a.end(),cmp);
	if(a.size()==1) cout<<a[0]<<" "<<"1";
	else{
		int cnt=1;
		for(int i=0;i<a.size()-1;++i){
			if(a[i]==a[i+1]) cnt++;
			else{
				cout<<a[i]<<" "<<cnt<<endl;
				cnt=1;
			}
		}
		cout << a.back() << " " << cnt;
	}
}
