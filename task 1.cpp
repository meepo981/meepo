#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int a, b, p, S;
        cout << "Введiть значення a =";
        cin >> a; 
        cout << "Введiть значення b =";
        cin >> b;
        S = a * b;
            p = 2 * (a + b);
            cout<<"Area = "<<S<<endl<<" Perimetr = " <<p<<endl;
            int Q, R, P, D;
            Q = a + b;
            R = a - b;
            P = a * b;
            D = a / b;
            cout << "Suma = " << Q << endl << "Riznica = " << R << endl << "Produkt = " << P << endl << "Division = " << D << endl;
            system("pause>>void");
            return 0;
}
