#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct SinhVien{
    string ma,ten,lop,ns;
    double gpa;
};
void nhap(SinhVien &a){
    a.ma="B20DCCN001";
    getline(cin,a.ten);
    cin>>a.lop;
    cin>>a.ns;
    cin>>a.gpa;
}
void in(SinhVien a){
    cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" ";
    int b=a.ns.find("/");
    if(b==1) a.ns.insert(0,"0");
    b=a.ns.find("/",3);
    if(b==4) a.ns.insert(3,"0");
    cout<<a.ns<<" "<<setprecision(2) << fixed << a.gpa;
}
int main(){
    faster;
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
