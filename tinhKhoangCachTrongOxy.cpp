#include <iostream>
#include <cmath>

using namespace std;

/* De bai: Nhap vao toa do 2 diem A(xA, yA) va B(xB, yB) 
   Tinh khoang cach AB*/

int main(){

    double a1, a2, b1, b2;
    double s;
    cout << "Nhap toa do a1: ";
    cin >> a1;
    cout << "\nNhap toa do a2: ";
    cin >> a2;
    cout << "\nNhap toa do b1: ";
    cin >> b1;
    cout << "\nNhap toa do b2: ";
    cin >> b2;

    s = sqrt(pow((b1 - a1),2) + pow((b2 - a2),2));
    /* Cong thuc tinh khoang cach 2 diem trong mat phang toa do Oxy
            |AB| = √((B₁-A₁)² + (B₂-A₂)²) */
    cout << "\nKhoang cach cua AB tren Oxy la: " << s;

    return 0;
}