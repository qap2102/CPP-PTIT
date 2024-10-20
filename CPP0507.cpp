#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct PhanSo{
    ll ts,ms; // tử số, mẫu số
};
void nhap(PhanSo &a){
    cin>>a.ts>>a.ms;
}
void rutgon(PhanSo &a){
    ll c=__gcd(a.ts,a.ms);
    a.ts/=c;
    a.ms/=c;
}
void in(PhanSo a){
    cout<<a.ts<<"/"<<a.ms;
}
PhanSo tong(PhanSo a,PhanSo b){
    PhanSo c;
    rutgon(a);
    rutgon(b);
    c.ms=a.ms*b.ms;
    c.ts=a.ts*b.ms+a.ms*b.ts;
    rutgon(c);
    return c;
}
int main(){
    faster;
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}