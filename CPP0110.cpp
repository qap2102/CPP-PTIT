#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s.find("084");
        while(a!=string::npos){// string::npos nghĩa là vị trí không tồn tại giống NULL trong C
            s.erase(a,3);
            a=s.find("084",a+1);
        }
        cout<<s<<endl;
    }
}