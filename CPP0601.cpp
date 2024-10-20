#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
class SinhVien{
	private:
		string msv,name,cla,birth;
		double gpa;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	getline(cin,name);
	cin>>cla>>birth>>gpa;
	msv="B20DCCN001";
	if(birth[1]=='/') birth.insert(0,"0");
	if(birth[4]=='/') birth.insert(3,"0");
}
void SinhVien::xuat(){
	cout<<msv<<" "<<name<<" "<<cla<<" "<<birth<<" ";
	cout<<setprecision(2)<<fixed<<gpa;
}
int main(){
	faster;
	SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
