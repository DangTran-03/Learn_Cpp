#include <iostream>
#include <cmath>
#include <cstdlib>
#define epsilon 1e-10

using namespace std;

/* De bai: Viet chuong trinh nhap vao ba so thuc la ba canh cua mot tam giac.
   Kiem tra ba canh duoc nhap xem co hop le khong. Neu hop le thi hay cho biet
   loai tam giac va dien tich cua tam giac do. */

inline void swap(double& a, double& b){
    
    double temp = a;
    a = b;
    b = temp;

}

int main(){

    double a, b, c;
    double p, s;

    cout << "Hay nhap canh a: ";
    cin >> a;
    cout << "\nHay nhap canh b: ";
    cin >> b;
    cout << "\nHay nhap canh c: ";
    cin >> c;

// Sap xep sao cho a <= b <= c
    if(a > b){
        swap(a, b);
    }

    if(a > c){
        swap(a, c);
    }

    if(b > c){
        swap(b, c);
    }

// De tao thanh mot tam giac tu ba canh thi tong 2 canh phai lon hon canh con lai
    if(a > 0 && a + b > c){
        // Neu a = c thi a = b
        if(a == c){
            cout << "\nTam giac deu";
        // c² - a² = b² => (c + a) * (c - a) - b² = 0 thi day la tam giac vuong
        }else if( abs((c + a) * (c - a) - b * b) < epsilon ){
            if(a == b || b == c){
                cout << "\nTam giac vuong can";
            }else{
                cout << "\nTam giac vuong";
            }
        }else {
            if(a == b || b == c){
                cout << "\nTam giac can";
            }else{
                cout << "\nTam giac thuong";
            }
        }
    }else{
        cout << "\nKhong hop le";
    }

    // Tinh nua chu vi p =  (a + b + c) / 2
    p = (a + b + c) / 2;

    // Tinh dien tich theo heron s = √(p * (p - a) * (p - b) * (p - c))
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "\nDien tich cua tam giac la: " << s << "\n";
    
    return 0;
}