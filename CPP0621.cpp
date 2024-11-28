#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
		string msvv(){
			string msvv=msv;
			return msv;
		}
};
istream& operator >> (istream &in, SinhVien &a){
	in>>a.msv;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	in>>a.email;
	return in;
}
ostream& operator << (ostream &out, SinhVien a){
	out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b){
	return a.msvv()<b.msvv();
}
int main(){
	SinhVien sv;
	vector<SinhVien> tep;
	while(cin>>sv){
		tep.push_back(sv);
	}
	sort(tep.begin(),tep.end(),cmp);
	for(int i=0;i<tep.size();++i){
		cout<<tep[i];
	}
}
