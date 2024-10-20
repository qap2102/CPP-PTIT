#include<bits/stdc++.h>
using namespace std;
bool nam_nhuan(int y){
	if(y%4 == 0){
		if(y % 100 == 0){
			return y % 400 == 0; 
		}
		return true; 
	} 
	return false; 
} 
int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; 
string res(string mien, int thang){
	if(mien == "Bac"){
		if(thang >= 2 && thang <= 4) return "Xuan";
		if(thang >= 5 && thang <= 7) return "He";
		if(thang >= 8 && thang <= 10) return "Thu";
		return "Dong"; 
	} 
	if(mien == "Nam"){
		if(thang >= 11 || thang <= 4) return "Kho";
		return "Mua"; 
	} 
} 
int main(){
	int t; cin>>t;
	while(t--){
		string mien;
		cin>> mien; 
		int nam, ngay;
		cin>>nam>>ngay ;
		int thang = 1;
		if(nam_nhuan(nam)){
			while(ngay > b[thang]){
				ngay -= b[thang];
				thang++; 
			} 
		}
		else{
			while(ngay > a[thang]){
				ngay -= a[thang];
				thang++; 
			} 
		} 
		cout << res(mien, thang) << endl; 
	} 
} 
