#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct NhanVien
{
    string stt,ten,gt,bday,add,maso,day,d,m,y;
};
bool cmp(NhanVien a,NhanVien b){
    if(a.y==b.y){
        if(a.d==b.d) return a.m<b.m;
        else return a.d<b.d;
    }
    return a.y<b.y;
}
int cnt;
void nhap(NhanVien &p){
    cin.ignore();
    getline(cin,p.ten);
    cin>>p.gt>>p.bday;
    cin.ignore();
    getline(cin,p.add);
    cin>>p.maso>>p.day;
    if(p.bday[1]=='/') p.bday="0"+p.bday;
    if(p.bday[4]=='/') p.bday.insert(p.bday.begin()+3,'0');
    p.d+=p.bday[0];p.d+=p.bday[1];
    p.m+=p.bday[3];p.m+=p.bday[4];
    p.y+=p.bday[6];p.y+=p.bday[7];
    p.y+=p.bday[8];p.y+=p.bday[9];
    if(p.day[1]=='/') p.day="0"+p.day;
    if(p.day[4]=='/') p.day.insert(p.day.begin()+3,'0');
    cnt++;
    if(cnt>9) p.stt="000"+to_string(cnt);
    else p.stt="0000"+to_string(cnt);
}
void sapxep(NhanVien p[],int n){
    sort(p,p+n,cmp);
}
void inds(NhanVien p[],int n){
    for(int i=0;i<n;++i){
        cout<<p[i].stt<<" "<<p[i].ten<<" "<<p[i].gt<<" "<<p[i].bday<<" "<<p[i].add<<" "<<p[i].maso<<" "<<p[i].day<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}