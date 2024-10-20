#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=105;
int a[N][N];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=n-1;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=n-1;j++){
                if (i==0||i==n-1||j==0||j==n-1) cout << a[i][j] << " ";
                else cout << "  ";
            }
            cout<<endl;
        }
    }
}