#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,ten,gt,ns,add,mst,nk;
	public:
		static int t;
		friend istream& operator >>(istream &in, NhanVien &a);
		friend ostream& operator <<(ostream &out, NhanVien a);
		string ngaysinh(){
			string ngaysinh=ns;
			return ns;
		}
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
bool cmp(NhanVien a, NhanVien b){
	string nam1=a.ngaysinh().substr(6,4);
	string nam2=b.ngaysinh().substr(6,4);
	string thang1=a.ngaysinh().substr(3,2);
	string thang2=b.ngaysinh().substr(3,2);
	string ngay1=a.ngaysinh().substr(0,2);
	string ngay2=b.ngaysinh().substr(0,2);
	if(nam1==nam2){
		if(ngay1==ngay2) return thang1<thang2;
		return ngay1<ngay2;
	}
	return nam1<nam2;
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

