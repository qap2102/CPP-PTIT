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
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector<string> res;
        while(ss>>word){
            res.push_back(word);
        }
        for(int i=res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}