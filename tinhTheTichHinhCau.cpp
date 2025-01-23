#include <iostream>
#include <cmath>

using namespace std;

/* De bai: nhap vao dien tich s cua mot mat cau, hay tinh the tich v 
   cua hinh cau nay */
int main(){

    const double pi = 3.141593;
    double s,v;

    cout << "Nhap dien tich s cua mat cau: ";
    cin >> s;

    v = ((4*pi) * pow((sqrt(s/(4*pi))),3) / 3);
    /* Vi S = 4πR² => R = √(S/4π)
       ma v = 4/3πR³ => ((4π) * (√(S/4π))³) / 3
    */

    cout << "The tich v cua hinh cau la: " << v << " \n";
    return 0;
}