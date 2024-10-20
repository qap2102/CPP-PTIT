#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct PhanSo{
    ll tu, mau;
};
void rutgon(PhanSo &a){
    ll c=__gcd(a.tu,a.mau);
    a.tu/=c;
    a.mau/=c;
}
PhanSo addC(PhanSo a,PhanSo b){
    rutgon(a);
    rutgon(b);
    PhanSo c;
    c.mau=a.mau*b.mau;
    c.tu=a.tu*b.mau+a.mau*b.tu;
    rutgon(c);
    return c;
}
PhanSo addD(PhanSo a, PhanSo b){
    rutgon(a);
    rutgon(b);
    PhanSo c;
    c.tu=a.tu*b.tu;
    c.mau=a.mau*b.mau;
    rutgon(c);
    return c;
}
void in(PhanSo a){
    cout<<a.tu<<"/"<<a.mau<<" ";
}
void process(PhanSo a, PhanSo b){
    PhanSo c=addC(a,b);
    c=addD(c,c);
    in(c);
    in(addD(addD(a,b),c));
    cout<<endl;
}
int main() {
    faster;
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
