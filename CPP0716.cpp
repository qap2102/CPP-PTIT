#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int n,k,cnt;
int a[25][25];
void check(int x,int y, int z){
    if(x==n-1&&y==n-1&&z==k){
        cnt++;
        return;
    }
    if(x<n-1&&z+a[x+1][y]<=k) check(x+1,y,z+a[x+1][y]);
    if(y<n-1&&z+a[x][y+1]<=k) check(x,y+1,z+a[x][y+1]);
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>k;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>a[i][j];
            }
        }
        check(0,0,a[0][0]);
        cout<<cnt<<endl;
    }
}
// sử dụng phương pháp nhánh cận để giải bài toán người đi du lịch trong toán rời rạc