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
        for(int i=0;i<n;++i){
            a[i]=i+1;
        }
        while(1){
            int kt=0;
            for(int i=0;i<n;++i){
                cout<<a[i];
            }
            cout<<" ";
            for(int i=n-2;i>=0;--i){
                if(a[i]<a[i+1]){
                    kt=1;
                    sort(a+i+1,a+n);
                    for(int j=i+1;j<n;++j){
                        if(a[i]<a[j]){
                            swap(a[i],a[j]);
                            break;
                        }
                    }
                    break;
                }
            }
            if(kt==0) break;
        }
        cout<<endl;
    }
}