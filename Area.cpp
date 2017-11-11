#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    float A, B, C;

    cin >> A >> B >> C;
    cout << fixed;

    cout << "TRIANGULO: " << setprecision(3) << (A*C)/2 << endl;
    cout << "CIRCULO: " << setprecision(3) << (3.14159*(C*C)) << endl;
    cout << "TRAPEZIO: " << setprecision(3) << (((A+B)/2)*C) << endl;
    cout << "QUADRADO: " << setprecision(3) << (B*B) << endl;
    cout << "RETANGULO: " << setprecision(3) << (A*B) << endl;

    return 0;
}
