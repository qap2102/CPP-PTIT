#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct SinhVien{
	string name,cla,ns;
	float gpa;
};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].cla>>a[i].ns>>a[i].gpa;
	}
}
void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		if(a[i].ns[1]=='/') a[i].ns.insert(0,1,'0');
		if(a[i].ns[4]=='/') a[i].ns.insert(3,1,'0');
		if(i<9) cout<<"B20DCCN00";
		else cout<<"B20DCCN0";
		cout<<i+1<<" "<<a[i].name<<" "<<a[i].cla<<" "<<a[i].ns<<" ";
		cout<<setprecision(2)<<fixed<<a[i].gpa<<endl;
	}
}
int main(){
    faster;
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
