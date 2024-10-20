#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct ThiSinh{
    string ten,ns;
    double a,b,c,sum;
};
void nhap(ThiSinh &x){
    getline(cin,x.ten);
    cin>>x.ns;
    cin>>x.a>>x.b>>x.c;
    x.sum=x.a+x.b+x.c;
}
void in(ThiSinh x){
    cout<<x.ten<<" "<<x.ns<<" "<<setprecision(1)<<fixed<<x.sum;
}
int main(){
    faster;
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}