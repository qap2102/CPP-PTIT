#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		friend istream& operator >>(istream &in, SinhVien &a);
		friend ostream& operator <<(ostream &out, SinhVien a);
		string lopp(){
			string lopp = lop;
			return lop;
		}
		string msvv(){
			string msvv=msv;
			return msv;
		}
};

istream& operator >>(istream &in, SinhVien &a){
	in>>a.msv;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	in>>a.email;
	return in;
}
ostream& operator <<(ostream &out, SinhVien a){
	out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b){
	if(a.lopp()==b.lopp()){
		return a.msvv()<b.msvv();
	}
	return a.lopp()<b.lopp();
}

int main(){
	SinhVien sv;
	vector<SinhVien> tep;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>sv;
		tep.push_back(sv);
		
	}
	sort(tep.begin(),tep.end(),cmp);
	for(int i=0;i<n;++i){
		cout<<tep[i];
	}
}
