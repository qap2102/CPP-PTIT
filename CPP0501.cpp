#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct Point{
    double x,y;
};
Point a,b;
void input(Point &a){
    cin>>a.x>>a.y;
}
double distance(Point a, Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int main(){
    faster;
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}