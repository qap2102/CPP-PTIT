#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    string a;
    ifstream input;
    input.open("PTIT.in");
    ofstream output;
    output.open("PTIT.out");
    while(!input.eof()){
        getline(input,a);
        output<<a;
        output<<endl;
    }
    input.close();
    output.close();
}