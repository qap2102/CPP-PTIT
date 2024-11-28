#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		friend istream& operator >>(istream &in, SinhVien &a);
		friend ostream& operator <<(ostream &out, SinhVien a);
		string masv(){
			string masv=msv;
			return msv;
		}
		string cla(){
			string cla=lop;
			return lop;
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
string check(string s){
	if(s=="KE TOAN") return "DCKT";
	if(s=="CONG NGHE THONG TIN") return "DCCN";
	if(s=="AN TOAN THONG TIN") return "DCAT";
	if(s=="VIEN THONG") return "DCVT";
	return "DCDT";
}
int main(){
	vector<SinhVien> tep;
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		SinhVien sv;
		cin>>sv;
		tep.push_back(sv);
	}
	int q;
	cin>>q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();++i){
			s[i]=toupper(s[i]);
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
		s=check(s);
		for(int i=0;i<tep.size();++i){
			string s1=tep[i].masv().substr(3,4);
			if(s1 == s){
				if(s1=="DCCN" || s1 == "DCAT"){
					if(tep[i].cla()[0] != 'E') cout<<tep[i];
				}
				else cout<<tep[i];
			}
		}
	}
}
