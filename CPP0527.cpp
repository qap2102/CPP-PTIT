#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct tgian{
    int h,m,s;
};
const int N=5005;
tgian a[N];
bool cmp(tgian a, tgian b){
    if(a.h==b.h){
		if(a.m==b.m) return a.s<b.s;
		return a.m<b.m;
	}
	return a.h<b.h;
}
int main(){
    faster;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i].h>>a[i].m>>a[i].s;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i].h<<" "<<a[i].m<<" "<<a[i].s<<endl;
}

