#include<bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string msv,ten,lop,ns;
		double gpa;
		
	public:
		SinhVien(){
			this->msv=this->ten=this->lop=this->ns="";
			this->gpa=0;
		}
		friend istream& operator >>(istream &in, SinhVien &a);
		friend ostream& operator <<(ostream &out, SinhVien a);
		static int t;
		double getgpa(){
			double getgpa = gpa;
			return gpa;
		}
		
};
istream& operator >>(istream &in, SinhVien &a){
	a.msv=to_string(++SinhVien::t);
	while(a.msv.size()<3) a.msv="0"+a.msv;
	a.msv="B20DCCN"+a.msv;
//	in.ignore();
	scanf("\n");
	string s;
	getline(in,s);
	stringstream ss(s);
	a.ten="";
	while(ss>>s){
		for(int i=0;i<s.size();++i){
			s[i]=tolower(s[i]);
		}
		s[0]=toupper(s[0]);
		a.ten+=(s+" ");
	}
	a.ten.pop_back();
	in>>a.lop;
	in>>a.ns;
	
	if(a.ns[1]=='/') a.ns.insert(0,"0");
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	in>>a.gpa;
	return in;
}
ostream& operator <<(ostream &out, SinhVien a){
	out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
	return out;
}
int SinhVien::t = 0;
bool cmp(SinhVien &a, SinhVien &b){
	return a.getgpa()>b.getgpa();
}
void sapxep(SinhVien a[50], int n){
	sort(a,a+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}


