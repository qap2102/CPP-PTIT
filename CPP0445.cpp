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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s1=1e7,s2=1e8;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(s1>a[i]) s1=a[i];
        }
        for(int i=0;i<n;i++){
            if(s2>a[i]&&a[i]>s1) s2=a[i];
        }
        if(s2==1e8) cout<<-1<<endl;
        else cout<<s1<<" "<<s2<<endl;
    }
}