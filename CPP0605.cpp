#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll gcd(ll a, ll b){
	while(b!=0){
		ll r=a%b;
		a=b;
		b=r;
	}
	return a;
}
class PhanSo{
	public:
		PhanSo(ll tu, ll mau);
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		void rutgon();
	private:
		ll tu, mau;
};
PhanSo::PhanSo(ll tu, ll mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator >> (istream &in, PhanSo &a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream &out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
void PhanSo::rutgon(){
	ll a=gcd(tu,mau);
	tu/=a;
	mau/=a;
}
int main(){
	faster;
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
