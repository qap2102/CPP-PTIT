#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+5;
bool a[N];
void sangnt(){
    memset(a,true,sizeof(a));
    a[0]=false;
    a[1]=false;
    for(int i=2;i*i<=N;i++){
        if(a[i]){
            for(int j=i*i;j<=N;j+=i){
                a[j]=false;
            }
        }
    }
}
int main(){
    sangnt();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=2;
        while(i<=n&&(!a[i]||!a[n-i])) i++;
        if (i<=n) cout << i << " " << n-i;
        cout << "\n";
    }
}