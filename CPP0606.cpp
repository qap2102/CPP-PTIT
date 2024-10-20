#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
class NhanVien{
	public:
		friend istream& operator >>(istream &in,NhanVien &a);
        friend ostream& operator >>(ostream &out,NhanVien a);
    private:
    	string id,name,gender,bday,address,thue,day;
};
istream& operator >> (istream& in, NhanVien &a){
	a.id="00001";
	getline(in,a.name);
	in>>a.gender;
	in>>a.bday;
	in.ignore();
	getline(in,a.address);
	in>>a.thue;
	in>>a.day;
	return in;
}
ostream& operator >> (ostream& out, NhanVien a){
	out<<a.id<<' '<<a.name<<' '<<a.gender<<' '<<a.bday<<' '<<a.address<<' '<<a.thue<<' '<<a.day;
	return out;
}
int main(){
	faster;
	NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}

