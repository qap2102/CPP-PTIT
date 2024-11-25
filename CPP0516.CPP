#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct hang{
    int ma;
    string ten, nhom;
    double ban,mua;
};
vector<hang> a;
hang b;
bool cmp(hang a, hang b){
    return a.ban-a.mua>b.ban-b.mua;
}
int main(){
    faster;
    int t;
    cin>>t;
    cout<<setprecision(2)<<fixed;
    for(int i=1;i<=t;++i){
        b.ma=i;
        cin.ignore();
        getline(cin,b.ten);
        getline(cin,b.nhom);
        cin>>b.mua>>b.ban;
        a.push_back(b);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<t;++i){
        cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].nhom<<" "<<a[i].ban-a[i].mua<<endl;
    }
}
