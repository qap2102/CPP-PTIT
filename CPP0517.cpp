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
int cnt;
void nhap(NhanVien &a){
    cin.ignore();
    cnt++;
    a.id=to_string(cnt);
    while(a.id.size()<5) a.id="0"+a.id;
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
void inds(NhanVien a[50], int n){
    for(int i=0;i<=n-1;i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].gender << " " << a[i].dob << " " << a[i].address << " " << a[i].code << " " << a[i].date << "\n";
    }
}
int main(){
    faster;
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}