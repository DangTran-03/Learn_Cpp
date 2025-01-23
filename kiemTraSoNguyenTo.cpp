#include <iostream>
#include <cmath>

using namespace std;

/* De bai: nhap vao mot so tu nhien va kiem tra xem so day co phai mot so 
   nguyen to khong? */
int main()
{

    int i, n;
    bool is_prime = true;

    cout << "Nhap so can kiem tra: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << n << " la so nguyen to \n";
    }
    else
    {
        cout << n << " khong phai la so nguyen to \n";
    }

    return 0;
}