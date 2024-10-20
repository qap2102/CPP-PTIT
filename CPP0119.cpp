#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                cnt+=(i%2==0);
                if(i!=n/i) cnt+=((n/i)%2==0);
            }
        }
        cout<<cnt<<endl;
    }
}