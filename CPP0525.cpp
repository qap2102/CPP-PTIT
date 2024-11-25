#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop;
	double a,b,c;
};
SinhVien a[105];
bool cmp(SinhVien u, SinhVien v){
	return u.ten<v.ten;
}
int main(){
	int n;
	cin>>n;;
	for(int i=0;i<n;++i){
		cin.ignore();
		getline(cin,a[i].msv);
		getline(cin,a[i].ten);
		getline(cin,a[i].lop);
		cin>>a[i].a>>a[i].b>>a[i].c;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i){
		cout<<i+1<<" "<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" ";
		printf("%.1lf %.1lf %.1lf\n",a[i].a,a[i].b,a[i].c);
	}
}