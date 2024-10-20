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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int line=n, col=m,k=0,p=0;
        int b[n*m];
        while(k<n*m){
            for(int i=p;i<col;i++){
                b[k++]=a[p][i];
            }
            for(int i=p+1;i<line;i++){
                b[k++]=a[i][col-1];
            }
            if(p!=line-1){
                for(int i=col-2;i>=p;--i){
                    b[k++]=a[line-1][i];
                }
            }
            if(p!=col-1){
                for(int i=line-2;i>p;--i){
                    b[k++]=a[i][p];
                }
            }
            p++;
            line--;
            col--;
        }
        for(int i=0;i<n*m;i++) cout<<b[i]<<" ";
		cout<<endl;
    }
}