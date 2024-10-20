#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct input{
    string name;
    int day,month,year;
};
bool cmp(input a, input b){
    if(a.year==b.year){
        if(a.month==b.month){
            return a.day>b.day;
        }
        return a.month>b.month;
    }
    return a.year>b.year;
}
int main(){
    faster;
    int n;
    cin>>n;
    struct input a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name;
        string x;
        cin>>x;
        a[i].day=(x[0]-'0')*10+x[1]-'0';
        a[i].month=(x[3]-'0')*10+x[4]-'0';
        a[i].year=(x[6]-'0')*1000+(x[7]-'0')*100+(x[8]-'0')*10+x[9]-'0';
    }
    sort(a,a+n,cmp);
    cout<<a[0].name<<endl<<a[n-1].name;
}