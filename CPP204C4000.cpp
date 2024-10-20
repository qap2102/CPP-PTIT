#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define PI 3.141592653589793238
struct Point{
    double x,y;
};
Point A,B,C;
double a,b,c,s,r;
double distance(Point a,Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

void input(Point &a){
    cin >> a.x >> a.y;
}

int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        input(A);
        input(B);
        input(C);
        a=distance(A,B);
        b=distance(B,C);
        c=distance(C,A);
        if (a+b>c&&b+c>a&&c+a>b){
            s=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
            r=a*b*c/(4*s);
            cout<<setprecision(3) << fixed << PI*r*r;
        }
        else cout << "INVALID";
        cout << endl;
    }
}