#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll s=n*(n+1)/2; // tổng của đoạn từ 1 đên n
        ll s1=(s+m)/2; // đoạn này tính tổng giá trị của tập có nhiều phần tử hơn 
        ll s2=(s-m)/2; // tính tổng của tập còn lại
        if(s1-s2!=m||__gcd(s1,s2)!=1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
// test 1: n=5 , m=7 có tập {1 2 3 5 } và {4}   thỏa mãn vì 1+2+3+5=11 => 11-4=7=m && 11 và 4 nguyên tố cùng nhau