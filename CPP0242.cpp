#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1005;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a1[N];
        a1[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a1[i]=a1[i-1]+x;
        }
        int a2[N];
        a2[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a2[i]=a2[i-1]+x;
        }
        bool check=false;
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i+1;j++){ // chỉ xét j đến n-i+1 để tránh bị RTE
                if(a1[j+i-1]-a1[j-1]==a2[j+i-1]-a2[j-1]){
                    cout<<i<<endl;
                    check=true;
                    break;
                }
            }
            if(check) break;
        }
    }
}