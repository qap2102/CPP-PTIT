#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
bool a[N];
void sieve(){// sử dụng sàng nguyên tố Erathones
    memset(a,true,sizeof(a));
    a[0]=false;
    a[1]=false;
    for(int i=2;i*i<=N;++i)
        if (a[i])
            for(int j=i*i;j<=N;j+=i) a[j]=false;
}

int main(){
    faster;
    sieve();
    int t;
    cin >> t;
    while(t--){
    	int n;
        cin >> n;
        int i=2;
        while(i<=n&&(!a[i]||!a[n-i])) i++;
        if (i>n) cout << -1;
        else cout << i << " " << n-i;
        cout << "\n";
    }
}

