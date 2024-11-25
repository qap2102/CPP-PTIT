#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    int m;
    cin>>m;
    int b[m][m];
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            a[i][j]*=b[i%m][j%m];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}