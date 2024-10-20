#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
int a[N],b[N];
int main(){
    faster;
    string s;
    cin >> s;
    int n=s.size();
    s=" "+s;
    a[0]=b[0]=0; // mảng a đếm kí tự A, mảng B đếm kí tự B
    for(int i=1;i<=n;i++)
        if (s[i]=='A'){
            a[i]=min(a[i-1],b[i-1]+1); // khi A<B thì B=A+1
            b[i]=min(a[i-1],b[i-1])+1; // khi A>b thì B++
        }
        else{
            b[i]=min(b[i-1],a[i-1]+1); // khi A<B thì a++
            a[i]=min(a[i-1],b[i-1])+1; // khi A>b a=b+1
        }
    cout << a[n];
}