#include<bits/stdc++.h>
using namespace std;
class GiangVien {
	private:
		string mgv, hoten, monhoc,ho;
		static int t;
	public:
		friend istream& operator >>(istream &in, GiangVien &a);
		friend ostream& operator <<(ostream &out, GiangVien a);
		string magv(){
			string magv=mgv;
			return mgv;
		}
		string layho(){
			string layho=ho;
			return ho;
		}
		
};
int GiangVien::t=0;
istream& operator >>(istream &in, GiangVien &a){
	a.mgv=to_string(++GiangVien::t);
	while(a.mgv.size()<2) a.mgv="0"+a.mgv;
	a.mgv="GV"+a.mgv;
	getline(in,a.hoten);
	string s;
	stringstream s1(a.hoten);
	while(s1>>s){
		a.ho=s;
	}
	getline(in,s);
	stringstream s2(s);
	a.monhoc="";
	while(s2>>s){
		a.monhoc+=toupper(s[0]);
	}
	return in;
}
ostream& operator <<(ostream &out, GiangVien a){
	out<<a.mgv<<" "<<a.hoten<<" "<<a.monhoc<<endl;
	return out;
}
bool cmp(GiangVien a, GiangVien b){
	if(a.layho()<b.layho()) return true;
	if(a.layho()==b.layho()){
		if(a.magv()<b.magv()) return true;
	}
	return false;
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
	sort(tep.begin(),tep.end(),cmp);
	for(int i=0;i<n;++i){
		cout<<tep[i];
	}
	
}

