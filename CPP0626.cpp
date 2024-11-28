#include<bits/stdc++.h>
using namespace std;
class GiangVien {
	private:
		string mgv,hoten,monhoc;
		static int t;
	public:
		
		friend istream& operator >>(istream &in, GiangVien &a);
		friend ostream& operator <<(ostream &out, GiangVien a);
		string subject(){
			string subject=monhoc;
			return monhoc;
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
		s=chuanhoa(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":"<<endl;
		for(int i=0;i<n;++i){
			if(tep[i].subject()==s){
				cout<<tep[i];
			}
		}
	}
	
	
}
