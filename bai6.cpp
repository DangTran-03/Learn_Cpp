#include <iostream>
#include <cmath>

using namespace std;

/* De bai: Viet chuong trinh nhap vao toa do cac dinh cua tam giac ABC cua cac diem
   M. Xac dinh diem M nam trong, nam tren canh hay nam ngoai tam giac ABC. */

double area(double xA, double yA, double xB, double yB, double xC, double yC){
    return 0.5 * abs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB));
}

int main(){

    double xA, yA, xB, yB, xC, yC ,xM, yM;
    double s;

    cout << "Nhap toa do A(xA, yA):\n";
    cin >> xA >> yA;

    cout << "\nNhap toa do B(xB, yB):\n";
    cin >> xB >> yB;

    cout << "\nNhap toa do diem C(xC, yC):\n";
    cin >> xC >> yC;

    cout << "\nNhap toa do diem M(xM, yM):\n";
    cin >> xM >> yM;

    s = (area(xM, yM, xA, yA, xB, yB) + area(xM, yM, xB, yB, xC, yC)
         + area(xM, yM, xA, yA, xC, yC)) - area(xA, yA, xB, yB, xC, yC);

    if(s > 0){
        cout << "\nDiem M nam ngoai tam giac ABC\n";;
    }else{
        if(area(xM, yM, xA, yA, xB, yB) == 0
           || area(xM, yM, xB, yB, xC, yC) == 0
           || area(xM, yM, xA, yA, xC, yC) == 0){

            cout << "\nDiem M nam tren canh tam giac ABC\n";
        }else{
            cout << "\nDiem M nam trong tam giac ABC\n";
        }
    }

    return 0;
}