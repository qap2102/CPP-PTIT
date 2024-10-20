#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct SinhVien{
    string ma, name,cla,ns;
    double gpa;
};
string chuanhoa(string s){
    s[0]=toupper(s[0]);
    for(int i=1;i<=s.size()-1;i++){
        s[i]=tolower(s[i]);
    }
    return s;
}
void nhap(SinhVien a[], int n){
    int b;
    string s;
    for(int i=0;i<n;i++){
        cin.ignore();
        a[i].ma=to_string(i+1);
        while(a[i].ma.size()<3) a[i].ma="0"+a[i].ma;
        a[i].ma.insert(0,"B20DCCN");
        getline(cin,s);
        stringstream ss(s);
        a[i].name="";
        while(ss>>s){
            a[i].name+=(chuanhoa(s)+" ");
        }
        a[i].name.pop_back();
        cin>>a[i].cla;
        cin>>a[i].ns;
        b=a[i].ns.find("/");
        if(b==1){
            a[i].ns.insert(0,"0");
        }
        b=a[i].ns.find("/",3);
        if(b==4){
            a[i].ns.insert(3,"0");
        }
        cin>>a[i].gpa;
    }
}
void in(SinhVien a[50],int n){
    cout << setprecision(2) << fixed;
    for(int i=0;i<n;i++){
        cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].cla<<" "<<a[i].ns<<" "<<a[i].gpa<<endl;
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


