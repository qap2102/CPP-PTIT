#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
int a,b;
bool c[N];
void sang(){
    memset(c,true,sizeof(c));
    c[0]=false;
    c[1]=false;
    for(int i=2;i*i<=N;i++){
        if(c[i]){
            for(int j=i*i;j<=N;j+=i)
                c[j]=false;
        }
    }
}
int main(){
    sang();
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b) swap(a,b);
        for(int i=a;i<=b;i++){
            if(c[i]) cout<<i<<" ";
        }
        cout<<"\n";
    }
}