#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt;
    for(int i=2;i<=sqrt(n);i++){
        cnt=0;
        while(n%i==0){
            n/=i;
            cnt++;
        }
        if(cnt) cout<<i<<" "<<cnt<<endl;
    }
    if(n>1) cout<<n<<" "<<"1"<<endl;
}