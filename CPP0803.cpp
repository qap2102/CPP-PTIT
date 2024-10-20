#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    ifstream in;
    in.open("DATA.in", ios::in);
    int n;
    map<int,int> mp;
    while(in>>n){
        mp[n]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}