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
        int n;
        cin>>n;
        int a[n];
        int b[100000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]=i;
        }
        sort(a,a+n);
        int maxx=0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<i;j++){
                int check=a[i]-a[j];
                if(b[a[i]]>b[a[j]]&&check>maxx){
                    maxx=check;
                }
            }
        }
        if(maxx==0) cout<<"-1"<<endl;
        else cout<<maxx<<endl;
    }
}