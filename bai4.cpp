#include <iostream>
#include <cmath>

using namespace std;

/* De bai: Viet chuong trinh nhap toa do C(xC, yC) la tam cua mot duong tron va r la ban kinh
   cua duong tron do. Nhap vao toa do cua diem M(xM, yM). Xac dinh M nam trong, nam tren hay
   nam ngoai duong tron */
int main()
{

    double r;
    double c1, c2, m1, m2;
    double d;

    cout << "Nhap toa do Cx: ";
    cin >> c1;
    cout << "\nNhap toa do Cy: ";
    cin >> c2;
    cout << "\nNhap ban kinh r: ";
    cin >> r;
    cout << "\nNhap toa do Mx: ";
    cin >> m1;
    cout << "\nNhap toa do My: ";
    cin >> m2;

    d = sqrt(pow((m1 - c1), 2) + pow(m2 - c2, 2));

    cout << "Diem M nam " << ((d < r) ? "trong duong tron\n" : ((d == r) ? "tren duong tron\n" : "ngoai duong tron\n"));

    return 0;
}