#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
class sinhvien {
	protected:
		int maso;
		char hoten[25];
	public:
		friend class lop;
		friend class bangdiem;
		void nhapbp(){
			cout<<"\n Ma so: ";
			cin>>maso;
			fflush(stdin);
			cout<<"\n Ho ten: ";
			cin.getline(hoten,25);
		}
		void xemmh(){
			cout<<"\n"<<maso<<" "<<hoten;
		}
};
class lop {
	private:
		sinhvien dssv[100];
		char malop[10];
		int ts;
	public:
		friend class bangdiem;
		void nhapbp(){
			cout<<"\n Ma lop: ";
			cin>>malop;
			cout<<"\n Tong so SV: ";
			cin>>ts;
			for(int i=0;i<ts;++i){
				dssv[i].nhapbp();
			}
		}
		void xemmh(){
			cout<<"\n DSSV lop: "<<malop;
			for(int i=0;i<ts;++i){
				dssv[i].xemmh();
			}
		}
		void sapxeptang(){
			sinhvien x;
			for(int i=0;i<ts-1;++i){
				for(int j=i+1;j<ts;++j){
					if(dssv[i].maso>dssv[j].maso){
						x=dssv[i];
						dssv[i]=dssv[j];
						dssv[j]=x;
					}
				}
			}
		}
};
class diemsinhvien:public sinhvien {
	private:
		int diem;
		char ketqua[10];
	public:
		friend class bangdiem;
		void nhapbp(){
			sinhvien::xemmh();
			cin>>diem;
			if(diem>=4){
				strcpy(ketqua,"Qua");
			}
			else strcpy(ketqua,"Hoc lai");
		}
		void xemmh(){
			sinhvien::xemmh();
			cout<<" "<<diem<<" "<<ketqua;
		}
};
class bangdiem {
	private:
		char malop[10];
		char monhoc[30];
		diemsinhvien dsdiem[100];
		int ts;
	public:
		bangdiem(){};
		bangdiem(lop d){
			strcpy(malop,d.malop);
			ts=d.ts;
			for(int i=0;i<ts;++i){
				dsdiem[i].maso=d.dssv[i].maso;
				strcpy(dsdiem[i].hoten,d.dssv[i].hoten);
			}
		}
		void nhapbp(){
			cout<<"\n Ma lop: "<<malop;
			cout<<"\n Mon hoc: ";
			fflush(stdin);
			cin.getline(monhoc,30);
			for(int i=0;i<ts;i++){
				dsdiem[i].nhapbp();
			}
		}
		void xemmh(){
			cout<<"\n Ma lop "<<malop;
			cout<<"\n Mon hoc: "<<monhoc;
			for(int i=0;i<ts;++i){
				dsdiem[i].xemmh();
			}
		}
		void ghitep(){
			fstream fghi("e:\\n16.dat",ios::out|ios::binary);
			fghi.write(reinterpret_cast<char*>(this),sizeof(bangdiem));
			fghi.close();
		}
		void doctep(){
			fstream fdoc("e:\\n16.dat",ios::in|ios::binary);
			fdoc.read(reinterpret_cast<char*>(this),sizeof(bangdiem));
			fdoc.close();
		}
};
main(){
	faster;
	lop a;
	a.nhapbp();
	a.sapxeptang();
	a.xemmh();
	bangdiem b(a);
	b.nhapbp();
	b.ghitep();
	bangdiem c;
	c.doctep();
	c.xemmh();
}
