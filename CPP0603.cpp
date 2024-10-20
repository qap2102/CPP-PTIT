#include<bits/stdc++.h>
using namespace std;
class SinhVien {
private:
    string msv, ten, lop, ns;
    float gpa; 
public:
    SinhVien(); 
    friend istream& operator >> (istream& in, SinhVien& a); 
    friend ostream& operator << (ostream& out, SinhVien a); 
    friend void chuanHoa(SinhVien&);  
}; 
istream& operator >> (istream& in, SinhVien& a) {
    a.msv = "B20DCCN001"; 
//  in.ignore(); 
    getline(in, a.ten); 
    in >> a.lop >> a.ns >> a.gpa; 
    chuanHoa(a);
    return in; 
} 
ostream& operator << (ostream& out, SinhVien a) {
    out << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
    return out; 
}
void chuanHoa(SinhVien& a) {
    string res = "";
    stringstream ss(a.ten);
    string token;
    while (ss >> token) {
        token[0] = toupper(token[0]); 
        for (int i = 1; i < token.size(); i++) {
            token[i] = tolower(token[i]); 
        }
        res += token + " "; 
    }
    res.erase(res.size() - 1);
    a.ten = res;
    if (a.ns[1] == '/') a.ns.insert(0, "0");  
    if (a.ns[4] == '/') a.ns.insert(3, "0");  
}
SinhVien::SinhVien() {
    msv = ten = lop = ns = "";
    gpa = 0; 
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}