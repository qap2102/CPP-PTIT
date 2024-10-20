#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=55;
int a[N][N], b[N][N], c[N][N];
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=p-1;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=p-1;j++){
            c[i][j]=0;
            for(int k=0;k<=m-1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=p-1;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}