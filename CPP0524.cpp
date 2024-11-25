#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct SinhVien{
    string msv, ten,lop;
    double a,b,c;
};
int cnt;
void nhap(SinhVien &x){
    cin>>x.msv;
    cin.ignore();
    getline(cin,x.ten);
    cin>>x.lop;
    cin>>x.a>>x.b>>x.c;
}
bool cmp(SinhVien u, SinhVien v){
    return u.msv<v.msv;
}
void sap_xep(SinhVien *x, int n){
    sort(x,x+n,cmp);
}
void in(SinhVien x){
    cout<<++cnt<<" "<<x.msv<<" "<<x.ten<<" "<<x.lop<<" "<<x.a<<" "<<x.b<<" "<<x.c<<endl;
}
void in_ds(SinhVien *x, int n){
    cout<<setprecision(1)<<fixed;
    for(int i=0;i<n;++i){
        in(x[i]);
    }
}
int main(){
    faster;
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
