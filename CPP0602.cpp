#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long lon
// cout: ostream
// cin: istream
class SinhVien{
	private:
		string msv,name,cla,birth;
		double gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};
istream& operator >> (istream &in, SinhVien &a){
	a.msv="B20DCCN001";
	getline(in,a.name);
	in>>a.cla>>a.birth>>a.gpa;
	if(a.birth[1]=='/') a.birth.insert(0,"0");
	if(a.birth[4]=='/') a.birth.insert(3,"0");
	return in;
}
ostream& operator << (ostream &out, SinhVien a){
	out<<a.msv<<" "<<a.name<<" "<<a.cla<<" "<<a.birth<<" "<<setprecision(2) << fixed << a.gpa;
	return out;
}
int main(){
	faster;
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
