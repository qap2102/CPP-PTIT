#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	private:
		string mdn,ten;
		int cnt;
	public:
		friend istream& operator >>(istream &in, DoanhNghiep &a);
		friend ostream& operator <<(ostream &out, DoanhNghiep a);
		int dem(){
			int dem=cnt;
			return cnt;
		}
		string sapxep(){
			string sapxep=mdn;
			return mdn;
		}
};
istream& operator >>(istream &in, DoanhNghiep &a){
	in>>a.mdn;
	in.ignore();
	getline(in,a.ten);
	in>>a.cnt;
	return in;
}
ostream& operator <<(ostream &out, DoanhNghiep a){
	out<<a.mdn<<" "<<a.ten<<" "<<a.cnt<<endl;
	return out;
}
bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.dem()==b.dem()){
		return a.sapxep()<b.sapxep();
	}
	return a.dem()>b.dem();
}
int main(){
	DoanhNghiep dn;
	vector<DoanhNghiep> tep;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>dn;
		tep.push_back(dn);
	}
	sort(tep.begin(),tep.end(),cmp);
	for(int i=0;i<n;++i){
		cout<<tep[i];
	}
	
}

