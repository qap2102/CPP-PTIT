#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
		string lopp(){
			string lopp=lop;
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

int main(){
	SinhVien sv;
	vector<SinhVien> tep;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>sv;
		tep.push_back(sv);
		
	}
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		for(int i=0;i<tep.size();++i){
			if(tep[i].lopp().substr(1,2)==s.substr(2,2)) cout<<tep[i];
		}
	}
}
