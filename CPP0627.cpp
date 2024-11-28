#include<bits/stdc++.h>
using namespace std;
class GiangVien {
	private:
		string mgv,hoten,monhoc;
		static int t;
	public:
		
		friend istream& operator >>(istream &in, GiangVien &a);
		friend ostream& operator <<(ostream &out, GiangVien a);
		string name(){
			string name=hoten;
			return hoten;
		}
};
string chuanhoa(string s){
	stringstream ss(s);
	string tmp="";
	while(ss>>s){
		tmp+=toupper(s[0]);
	}
	return tmp;
}
int GiangVien::t=0;
istream& operator >>(istream &in, GiangVien &a){
	a.mgv=to_string(++GiangVien::t);
	while(a.mgv.size()<2) a.mgv="0"+a.mgv;
	a.mgv="GV"+a.mgv;
	getline(in,a.hoten);
	getline(in,a.monhoc);
	a.monhoc=chuanhoa(a.monhoc);
	return in;
}
ostream& operator <<(ostream &out, GiangVien a){
	out<<a.mgv<<" "<<a.hoten<<" "<<a.monhoc<<endl;
	return out;
}
int main(){
	GiangVien gv;
	vector<GiangVien> tep;
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;++i){
		cin>>gv;
		tep.push_back(gv);
	}
	int q;
	cin>>q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		for(int i=0;i<s.size();++i) s[i]=tolower(s[i]);
		for(int i=0;i<n;++i){
			string s1=tep[i].name();
			for(int j=0;j<s1.size();++j){
				s1[j]=tolower(s1[j]);
			}
			if(s1.find(s)!=string::npos) cout<<tep[i];
		}
	}
}
