#include <iostream>
using namespace std;

class bidangdatar {
private:
	int x,y;
public:
	bidangdatar(){
		x = 0;
		y = 0;
	}
	virtual void input(){
       
    }
	virtual float luas(int a) { //hasil perhitungan yang menghasilkan pecahan
        
        return 0;}
	virtual float keliling(int a) { 
        
        return 0;}
	virtual void cekUkuran() { 
        
        return ;}
	void setx(int a) { //menyimpan nilai
		this->x = a;
	}
    void sety(int b) {
        this->y = b;
    }
	int getx() { //mengambil nilai
		return x;
	}
    int gety() {
        return y;
    }

};

class lingkaran:public bidangdatar{
public:
    void input() {
        cout << "lingkaran dibuat" << endl;
        cout << "masukkan jejari : ";
        int r;
        cin >> r;
        setx(r);
    }
    float luas(int r) {
        return 3.14 * r * r;
    }
    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
    void cekUkuran() {
        float keliling = Keliling(getx());
        if (keliling > 40)
            cout << "Ukuran lingkaran adalah Besar" << endl;
        else if (keliling < 20)
            cout << "Ukuran lingkaran adalah Sedang" << endl;
        else if (keliling < 10)
            cout << "Ukuran lingkaran adalah Kecil" << endl;
    }
};
class persegipanjang:public bidangdatar{
public:
    void input() {
        cout << "Persegipanjang dibuat" << endl;
        cout << "Masukkan panjang : ";
        int p;
        cin >> p;
        cout << "Masukkan lebar : ";
        int l;
        cin >> l;
        setx(p);
        sety(l);
    }
    float luas(int p) { 
        return p * gety();
    }
    float Keliling(int p) {
        return 2 * (p + gety());
    }
    void cekUkuran() {
        float keliling = Keliling(getx());
        if (keliling > 40)
            cout << "Ukuran Persegi Panjang adalah Besar" << endl;
        else if (keliling < 20)
            cout << "Ukuran Persegi Panjang adalah Sedang" << endl;
        else if (keliling < 10)
            cout << "Ukuran Persegi Panjang adalah Kecil" << endl;
    }
};

int main(){
    char repeat;
    do {
        lingkaran lingkaran;
        lingkaran.input();
        int r = lingkaran.getx();
        cout << "luas lingkaran = " << lingkaran.luas(r) << endl;
        cout << "keliling lingkaran = " << lingkaran.Keliling(r) << endl;
        lingkaran.cekUkuran();

        persegipanjang persegi;
        persegi.input();
        int p = persegi.getx();
        cout << "luas persegipanjang = " << persegi.luas(p) << endl;
        cout << "keliling persegipanjang = " << persegi.Keliling(p) << endl;
        persegi.cekUkuran();

        cout << "Apakah Anda ingin mengulang program? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}