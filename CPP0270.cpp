#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int a[305][305], b[3][3];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>b[i][j];
            }
        }
        ll cnt=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                for(int k=i;k<=i+2;k++){
                    for(int q=j;q<=j+2;q++){
                        cnt+=a[k][q]*b[k-i][q-j];
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}