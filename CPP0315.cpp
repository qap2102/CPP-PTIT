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
        string s;
        cin>>s;
        int n=s.size();
        bool kt=false;
        for(int i=n-2;i>=0;--i){
            if(s[i]>s[i+1]){
                kt=true;
                int a=0,k;
                for(int j=i+1;j<n;++j){
                    if(s[j]<s[i]){
                        if(s[j]>a){
                            a=s[j];
                            k=j;
                        }
                    }
                }
                swap(s[i],s[k]);
                break;
            }
        }
        if(!kt) cout<<-1<<endl;
        else cout<<s<<endl;
    }
}