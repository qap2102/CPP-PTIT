#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int k = n - 1;
	int loz = 1;
	for(int i = 1; i <= k; i++) cout<<" ";
	cout<<"*"<<endl;
	k--;
	for(int i = 2; i<= n-1; i++){
		for(int j = 1; j<=k; j++){
			cout<<" "; 
		} 
		cout<<"*";
		for(int j = 1; j <= loz; j++ ){
			cout<<" "; 
		} 
		cout<<"*";
		k--;
		loz+=2;
		cout<<endl; 
	} 
	for(int i = 1; i<=n ; i++){
		cout<<"* "; 
	} 
	return 0; 
}
// Rất cảm ơn thầy Nguyễn Hữu Anh Tài :))
// https://www.facebook.com/tho.nguyenhuu.378199 in4 cho ai cần 