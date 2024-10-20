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
        int n,k;
        cin>>n>>k;
        map<int,int> a;
        int b[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            a[b[i]]++; // mảng đánh dấu
        }
        for(int i=0;i<n;i++){
            if(a[k-b[i]]>0){
                if(b[i]==k-b[i]){
                    cnt+=a[k-b[i]]-1;
                }
                else cnt+=a[k-b[i]];
            }
        }
        cout<<cnt/2<<endl;
    }
}