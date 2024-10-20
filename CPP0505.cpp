#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct NhanVien{
    string id,name,gender,dob,address,code,date;
};
void chuanhoa(string &s){
    int b=s.find("/");
    if (b==1) s.insert(0,"0");
    b=s.find("/",3);
    if (b==4) s.insert(3,"0");
}
void nhap(NhanVien &a){
    a.id="00001";
    getline(cin,a.name);
    cin >> a.gender;
    cin >> a.dob;
    chuanhoa(a.dob);
    cin.ignore();
    getline(cin,a.address);
    cin >> a.code;
    cin >> a.date;
    chuanhoa(a.date);
}
void in(NhanVien a){
    cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.code << " " << a.date;
}
int main(){
    faster;
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

