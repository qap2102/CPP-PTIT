#include<bits/stdc++.h>
using namespace std;
double xa,ya,xb,yb;
int main(){
    int t;
    cin >> t;
    cout << setprecision(4) << fixed;
    while(t--){
        cin >> xa >> ya >> xb >> yb;
        cout << sqrt(pow(xa-xb,2)+pow(ya-yb,2)) << "\n";
    }
}