#include<bits\stdc++.h>
using namespace std;

class sinhvien{
	private: // khai bao bien cuc bo???
		int masv; char hoten[100];
	public:
		void nhap(){
			cin >> masv;
			fflush(stdin);
			cin.getline(hoten, 100);
		}
		void xem(); // Khai bao nguyen mau ham
		
};

class dssv{
	//Khong can co private vi ngam dinh san la private
	sinhvien a[100];
	int ts; //tongso
	public:
		dssv(){		// tao mot doi tuong moi phai de trong ham public
			ts = 0;
		}
		void themdau(sinhvien x){
			if(ts == 100){
				cout << "Danh sach day"<<endl;
				return;
			}
			++ts;
			for (int i= ts - 1; i > 0; i--){
				a[i] = a[i-1];
			}
		}
		void xemmh(){
			if (ts == 0 )  return;
			for (int i=0; i<ts; i++){
				a[i].xem();
			}
		}
};

void sinhvien::xem(){ // khai bao ham lop sinhvien
	cout << "\n" << masv << " "<< hoten;
}

int main(){
	sinhvien x; dssv d;
	int choose = 0, ts;
	while(choose != 3){
		cin >> choose;
		if(choose == 1){
				cin >> ts;
				for(int i=0; i < ts; i++){
					x.nhap(); 
					d.themdau(x);
				}
				d.xemmh();
				break;
		}
	}
	
	
	
	
	return 0;
}
