#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Lớp SinhVien
class SinhVien {
private:
    string MaSo;
    string HoTen;
    int Ngay, Thang, Nam;

public:
    SinhVien() : Ngay(0), Thang(0), Nam(0) {}

    void Nhap() {
        cin >> MaSo;
        cin.ignore();
        getline(cin, HoTen);
        cin >> Ngay >> Thang >> Nam;
    }

    void Xuat() const {
        cout << MaSo << " " << HoTen << " " << Ngay << " " << Thang << " " << Nam << endl;
    }

    string getHoTen() {
        return HoTen;
    }

    void setThongTin(string maSo, string hoTen, int ngay, int thang, int nam) {
        MaSo = maSo;
        HoTen = hoTen;
        Ngay = ngay;
        Thang = thang;
        Nam = nam;
    }

    bool operator>(const SinhVien& other) const {
        if (Nam != other.Nam) return Nam < other.Nam;
        if (Thang != other.Thang) return Thang < other.Thang;
        return Ngay < other.Ngay;
    }
};

// Lớp DanhSachSinhVien
class DanhSachSinhVien {
private:
    SinhVien A[100];
    int TongSoSV;

public:
    DanhSachSinhVien() : TongSoSV(0) {}

    void ThemSinhVien(SinhVien sv) {
        for (int i = TongSoSV; i > 0; --i) {
            A[i] = A[i - 1];
        }
        A[0] = sv;
        TongSoSV++;
    }

    void SuaThongTin(string hoTen) {
        for (int i = 0; i < TongSoSV; ++i) {
            if (A[i].getHoTen() == hoTen) {
                SinhVien sv;
                sv.Nhap();
                A[i] = sv;
                break;
            }
        }
    }

    void SapXep() {
        sort(A, A + TongSoSV, greater<SinhVien>());
    }

    void XuatDanhSach() const {
        for (int i = 0; i < TongSoSV; ++i) {
            A[i].Xuat();
        }
    }
};

int main() {
    DanhSachSinhVien ds;
    int luaChon;

    while (true) {
        cin >> luaChon;
        if (luaChon == 3) {
            ds.SapXep();
            ds.XuatDanhSach();
            return 0;
        } else if (luaChon == 1) {
            int soSV;
            cin >> soSV;
            cout << soSV << endl;
            for (int i = 0; i < soSV; ++i) {
                SinhVien sv;
                sv.Nhap();
                ds.ThemSinhVien(sv);
            }
        } else if (luaChon == 2) {
            string hoTen;
            cin.ignore();
            getline(cin, hoTen);
            cout << hoTen << endl;
            ds.SuaThongTin(hoTen);
        }
    }

    return 0;
}
