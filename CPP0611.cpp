#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int t=1;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		float gpa;
	public:
		SinhVien();
		static int t;
		friend istream& operator >>(istream &in, SinhVien &a);
		friend ostream& operator <<(ostream &out, SinhVien a);
};
SinhVien::SinhVien(){}
istream& operator >>(istream &in, SinhVien &a){
	a.msv=to_string(++SinhVien::t);
	while(a.msv.size()<3) a.msv="0"+a.msv;
	a.msv="B20DCCN"+a.msv;
	in.ignore();
	getline(cin,a.ten);
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
int SinhVien::t=0;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
