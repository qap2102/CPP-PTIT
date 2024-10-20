#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(char x:s){
            if(isdigit(x)) a=a*10+x-'0'; // hàm isdigit() kiểm tra kí tự có phải chữ số không
            else{
                b+=a;
                a=0;
            }
        }
        b+=a;
        cout<<b<<endl;
    }
}