#include<bits/stdc++.h>
using namespace std;
int t,cnt;
string s;
int main(){
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        stringstream ss(s);
        cnt=0;
        while(ss >> s) cnt++;
        cout << cnt << "\n";
    }
}