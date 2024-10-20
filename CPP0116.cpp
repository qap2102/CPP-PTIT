#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+5;
int c[N];
bool a[N];
vector<int> b; // tạo vector chứa số nguyên tố
void sangnt(){
    memset(a,true,sizeof(a));
    a[0]=false;
    a[1]=false;
    for(int i=2;i<=N;i++){
        if(a[i]){
            for(int j=i*i;j<=N;j+=i){
                a[j]=false;
            }
        }
    } // đã duyệt xong các số nguyên tố
    for(int i=2;i<=N;i++){
        if(a[i])
            b.push_back(i); // đưa các số nguyên tố vào mảng b
    }
}
int main(){
    sangnt();
    c[1]=1;
    int i,j;
    for(i=2;i<=10000;i++){
        j=0;
        while(i%b[j]) j++; // số đầu tiên chia hết là số nhỏ nhất
        c[i]=b[j];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}