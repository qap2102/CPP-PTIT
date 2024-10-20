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
        int check=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[i+1]){
                check=1;
                sort(a+i,a+n,greater<int>());
                for(int j=i+1;j<=n;j++){
                    if(a[i]>a[j]){
                        swap(a[i],a[j]);
						break;
                    }
                }
                break;
            }
        }
        if(check==0){
            for(int i=0;i<n;i++) cout<<i+1<<" ";
        }
        else for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}