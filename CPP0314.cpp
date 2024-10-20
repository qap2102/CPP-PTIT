#include<bits/stdc++.h>
using namespace std;
set<string> a;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        a.insert(s);
    }
    cout << a.size();
}