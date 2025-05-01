#include <iostream>
using namespace std;

class Segitiga {
private:
    float alas, tinggi;
    
    float HitungLuas(){
        return alas * tinggi / 2;
    }

    float HitungKeliling(){
        float sisi = ((alas * alas) + (tinggi * tinggi));
        return alas + tinggi + sisi;
    }

    public:
        void input(){
            cout << "Masukkan Alas Segitiga 1-100:";
            cin >> alas;
            cout << "Masukkan Tinggi Segitiga 1-100:";
            cin >> tinggi;
        }

        void output(int pilihan) {
            switch (pilihan){
                case 1:
                    cout << "Luas segitiga: " << HitungLuas() << " cm^2" << endl;
                    break;
                case 2:
                    cout << "Keliling segitiga: " << HitungKeliling() << endl;
                    break;
                case 3:
                    cout << "Keluar dari program." << endl;
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
                }

        }
        
};

int main() {
    Segitiga segitiga;
    int pilihan;

    do {
        cout << " ======== Menu ========" << endl;
        cout << "1. Hitung luas segitiga" << endl;
        cout << "2. Hitung keliling segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
    
        if (pilihan == 1 || pilihan == 2) {
            segitiga.input();
        }

        segitiga.output(pilihan);

    } while (pilihan != 3);

    return 0;
}