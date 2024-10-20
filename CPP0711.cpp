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
        vector<int> a(n,0);
        while(true){
            int check=0;
            for(int i=0;i<n;i++){
                cout<<a[i];
            }
            cout<<" ";
            for(int i=n-1;i>=0;i--){ // bắt đầu từ bit cuối cùng, đi tìm bit 0 đầu tiên
                if(a[i]==0){
                    check=1;
                    a[i]=1;
                    for(int j=i+1;j<=n;j++){
                        a[j]=0;
                    }
                    break;
                }
            }
            if(check==0) break;
        }
        cout<<endl;
    }
}
// Thuật toán sinh trong toán rời rạc 1