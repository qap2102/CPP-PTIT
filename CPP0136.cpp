#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
bool a[N];
int b[N];
void sangnt(){
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i*i<=N;i++){
        if(a[i]){
            for(int j=i*i;j<=N;j+=i){
                a[j]=false;
            }
        }
    }
    b[0]=0;
    for(int i=1;i<=1000000;i++) b[i]=b[i-1]+a[i];
}
int main(){
    faster;
    sangnt();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        n=(ll)sqrt(n);
        cout<<b[n]<<endl;
    }
}