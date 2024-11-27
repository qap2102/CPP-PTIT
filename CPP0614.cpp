#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,ten,gt,ns,add,mst,nk;
	public:
		static int t;
		friend istream& operator >>(istream &in, NhanVien &a);
		friend ostream& operator <<(ostream &out, NhanVien a);
		
};
int NhanVien::t=0;
istream& operator >>(istream &in, NhanVien &a){
	a.mnv=to_string(++NhanVien::t);
	while(a.mnv.size()<5) a.mnv="0"+a.mnv;
	in.ignore();
	getline(in,a.ten);
	in>>a.gt;
	in>>a.ns;
	in.ignore();
	getline(in,a.add);
	
	in>>a.mst;
	in>>a.nk;
	return in;
}
ostream& operator <<(ostream &out, NhanVien a){
	out<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.add<<" "<<a.mst<<" "<<a.nk<<endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
