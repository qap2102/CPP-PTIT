#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
bool a[N];
int b[N];
void sang(){
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i*i<=100000;i++){
        if(a[i]){
            for(int j=i*i;j<=N;j+=i){
                a[j]=false;
            }
        }
    }
    b[0]=0;
    for(int i=1;i<=100000;i++){
        b[i]=b[i-1]+a[i];
    }
}
int main(){
    faster;
    sang();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<b[r]-b[l-1]<<endl;
    }
}