#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int n;
ll a[5005];
// void test(){
//     vector<ll> a;
//     cin>>a[0]>>a[1]>>a[2];
//     sort(a.begin(),a.end());
//     if(a[0]+a[1]>a[2]){
//         cout<<"YES";
//     }
//     else cout<<"NO";
// } bài toán kiểm tra 3 số có tạo thành 1 tam giác không
bool check(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(binary_search(a+j+1,a+n,a[i]+a[j])) return true;
        }
    }
    return false;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]*=a[i];
        }
        sort(a,a+n);
        cout<<(check()?"YES":"NO")<<endl;
    }
}
// thuật toán binary_search dùng để tìm phần tử X có ở trong mảng không
